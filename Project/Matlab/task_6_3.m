clc;
sampling_freq = 4.2;
fSamplingPeriod= 1/sampling_freq;
robot_lqr_discrete = c2d(robot_lqr,fSamplingPeriod,'tustin');
[robot_lqr_discrete_Ad,robot_lqr_discrete_Bd,robot_lqr_discrete_Cd,robot_lqr_discrete_Dd]= ssdata(robot_lqr_discrete);
Kd_lqr = dlqr(robot_lqr_discrete_Ad,robot_lqr_discrete_Bd,C_bar'*C_bar,row);