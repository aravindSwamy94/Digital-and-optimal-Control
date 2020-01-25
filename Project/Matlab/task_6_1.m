clc;
robot_mod = ss(A,B,C,D);
dis_robot_mod = c2d(robot_mod,fSamplingPeriod,'Tustin');