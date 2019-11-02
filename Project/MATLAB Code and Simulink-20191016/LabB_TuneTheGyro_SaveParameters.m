close all; clear all; clc;

% set the clock of the board
fSamplingPeriod = 0.01;

% open the Simulink diagram
open_system('LabB_TuneTheGyro');

% launch the simulation (note that "external mode" does not support the sim command)
set_param('LabB_TuneTheGyro', 'SimulationCommand', 'start');
fprintf('Started the simulation!\n');

% wait for some seconds
iTimeToWait = 7; % in seconds
for iTime = 1:iTimeToWait;
	fprintf( '%.2f percent done\n', iTime/(iTimeToWait/100) );
	pause(1);
end;%

% stop the simulation
set_param('LabB_TuneTheGyro', 'SimulationCommand', 'stop');
fprintf('Simulation stopped: waiting for receiving the data...\n');

% wait again a little bit, so that the variables get loaded in the workspace
pause(3);

% store the value of the bias in a variable
fGyroBias = mean(afGyroBias.signals.values);

% save this value in a .mat file
save('GyroBias.mat', 'fGyroBias');
fprintf('Done! Data received and saved successfully.\n');

% close simulink 
close_system('LabB_TuneTheGyro');

