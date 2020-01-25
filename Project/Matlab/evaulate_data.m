close all;
clear;

files = {{'theta120.mat','xw120.mat'},{'theta140.mat','xw140.mat'},{'theta160.mat','xw160.mat'},{'theta200.mat','xw200.mat'}};
data = {};
for meas=1:numel(files)
    measdata = {load(files{meas}{1});load(files{meas}{2})};
    data{end+1} = measdata;
end

% xw_data = load('nn_meas_anal120xw.mat').anal120xw;
% th_data = load('nn_meas_anal120theta.mat').anal120theta;
% subplot(2,1,1);
% plot(xw_data.time,xw_data.signals.values(:),'b');
% legend('$x_w$','Interpreter','latex','FontSize',17);
% subplot(2,1,2);
% plot(th_data.time,th_data.signals.values(:),'g');
% legend('$\theta$','Interpreter','latex','FontSize',17);
% 
