%% Evaulating data generated by Simulink

% Calculate maximum error measured in estimating x_w and theta_b by
% executing the model LabB_ObserverOverSimulator_Continuous.slx
time = cont_theta_b_results.Time;

x_w = cont_x_w_results.Data(:,1);
x_w_est_full = cont_x_w_results.Data(:,2);
x_w_est_red = cont_x_w_results.Data(:,3);

theta_b = cont_theta_b_results.Data(:,1);
theta_b_est_full = cont_theta_b_results.Data(:,2);
theta_b_est_red = cont_theta_b_results.Data(:,3);

fprintf("The maximum error between the actual and estimated via full observer x_w: %f\n",...
        max(x_w_est_full-x_w))
fprintf("The maximum error between the actual and estimated via reduced observer x_w: %f\n",...
        max(x_w_est_red-x_w))
fprintf("The maximum error between the actual and estimated via full observer theta_b: %f\n",...
        max(theta_b_est_full-theta_b))
fprintf("The maximum error between the actual and estimated via reduced observer theta_b: %f\n",...
        max(theta_b_est_red-theta_b))


%%
