afFigurePosition = [1 1 10 6];

figure(MEASURED_X_W_INDEX * 100)
plot(afTimes, aafProcessedInformation(MEASURED_X_W_INDEX,:));
xlabel('time [sec]');
ylabel('position [m]');
title('x_w');
set(gcf, 'Units', 'centimeters'); set(gcf,'Position',afFigurePosition); set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', '../Instructions/Images/LabB_Troubleshooting_RobotWalks_x_w.eps');

figure(MEASURED_THETA_B_INDEX * 100)
plot(afTimes, aafProcessedInformation(MEASURED_THETA_B_INDEX,:));
xlabel('time [sec]');
ylabel('angle [rad]');
title('\theta_b');
set(gcf, 'Units', 'centimeters'); set(gcf,'Position',afFigurePosition); set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', '../Instructions/Images/LabB_Troubleshooting_RobotWalks_theta_b.eps');


