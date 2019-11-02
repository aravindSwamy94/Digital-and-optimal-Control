figure(MAIN_FIGURE_INDEX);
hold on;
set(gcf,'unit','normalized','position',[0,0.35,1,0.65]); % xmin ymin xmax ymax
set(gcf, 'menubar', 'none')
for iSignal = 1:iNumberOfSignals;
	subplot(710 + iSignal);
	xlim([afTimes(1) afTimes(end)]);
	switch(iSignal)
		case 1
		   	ylabel('u');
		case 2
		   	ylabel('x_w');
		case 3
		   	ylabel('theta_b');
		case 4
		   	ylabel('x_w_hat_full');
		case 5
		   	ylabel('theta_b_hat_full');
		case 6
		   	ylabel('x_w_hat_reduced');
		case 7
		   	ylabel('theta_b_hat_reduced');
		otherwise
			warning('something strange is happening');
	end;
	drawnow;
end;%
hold off;


figure(MEASURED_X_W_INDEX * 10)
hold on;
set(gcf,'unit','normalized','position',[0,0.05,0.5,0.3]); % xmin ymin xmax ymax
set(gcf, 'menubar', 'none')
legend('full', 'reduced');
title('errors on the observation of x_w');
xlabel('time [sec]');
ylabel('position [m]');
drawnow;
hold off;
fLimitForXw = 0;


% plot the errors on theta_b
figure(MEASURED_THETA_B_INDEX * 10)
hold on;
set(gcf,'unit','normalized','position',[0.5,0.05,0.5,0.3]); % xmin ymin xmax ymax
set(gcf, 'menubar', 'none')
legend('full', 'reduced');
title('errors on the observation of \theta_b');
xlabel('time [sec]');
ylabel('angle [rad]');
drawnow;
hold off;
fLimitForTb = 0;

