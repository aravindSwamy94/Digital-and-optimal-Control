close all;
clc;


%LabB_Solutions


% load the PID
%kP = -46.6;
%kI = -260;
%kD = -0.1; 

% parameters loaded from lab 1 data
C = [1 0 0 0;0 0 1 0];

L = (place(A',C',[-5.6*10 -843.1*10 -4.01*10 -4.02*10]))';

C_acc = C(1,:);

C_acc_bar = C(2,:);

T_inv = [C_acc;0 1 0 0;0 0 1 0 ;0 0 0 1];

T = inv(T_inv);

A_hat = T_inv*A*T;

B_hat = T_inv*B;

C_acc_hat= C_acc*T;

C_acc_bar_hat= C_acc_bar*T;

A_yy = A_hat(1,1);

A_yx = A_hat(1:1,2:4);

A_xy = A_hat(2:4,1:1);

A_xx = A_hat(2:4,2:4);

B_y = B_hat(1,1);

B_x = B_hat(2:4,1:1);

C_y = C_acc_bar_hat(1,1);

C_x = C_acc_bar_hat(1:1,2:4);

AA = A_xx;

CC = [1 0 0; 0 1 0];

L_new = (place(AA', CC' , [-5.6*10 -843.1*10 -4.01*10]))';

L_acc = L_new(1:3,1:1);

L_acc_bar = L_new(1:3,2:2);

M1 = A_xx - (L_acc* A_yx) - (L_acc_bar* C_x);

M2 = B_x - (L_acc*B_y);

M3 = A_xy - (L_acc* A_yy) - (L_acc_bar*C_y);

M4 = L_acc_bar;

M5 = L_acc;

M6 = T(1:4,1:1);

M7 = T(1:4,2:4);

figure;
subplot(3,1,1)
plot(x_w.time,x_w.signals.values(:,1))
title('x_w')
subplot(3,1,2)
plot(x_w.time,x_w.signals.values(:,2))
title('full order estimator x_w')
subplot(3,1,3)
plot(x_w.time,x_w.signals.values(:,3))
title('reduced order estimator x_w')

figure;
subplot(3,1,1)
plot(theta_b.time,theta_b.signals.values(:,1))
title('theta_b')
subplot(3,1,2)
plot(theta_b.time,theta_b.signals.values(:,2))
title('full order estimator theta_b')
subplot(3,1,3)
plot(theta_b.time,theta_b.signals.values(:,3))
title('reduced order estimator theta_b')


%%
x_w_system = x_w.signals.values(:,1);

x_w_full= x_w.signals.values(:,2);

x_w_reduced= x_w.signals.values(:,3);

full_x_error = abs(max(x_w_system - x_w_full))

reduced_x_error = abs(max(x_w_system - x_w_reduced))

theta_b_system = theta_b.signals.values(:,1);

theta_b_full= theta_b.signals.values(:,2);

theta_b_reduced= theta_b.signals.values(:,3);

full_theta_error = abs(max(theta_b_system - theta_b_full))

reduced_theta_error = abs(max(theta_b_system - theta_b_reduced))

%%
% % M1 = 1.0e+03 * [
%    -0.4358   -0.0072    0.0091
%    -0.0011   -0.0340    0.0010
%     1.8717   -0.0165   -0.0400
% ]
% 
% M2 = [
%    20.6000
%          0
%   -90.0000
% ]
% 
% M3 = [
%      0
%      0
%      0
% ]
% 
% M4 = [
%     1.1459
%    33.9942
%    78.4584
% ]
% 
% M5 = [
%     0.7598
%     1.1459
%    31.6987
% ]
% 
% M6 = [
%      1
%      0
%      0
%      0
% ]
% 
% M7 = [
%      0     0     0
%      1     0     0
%      0     1     0
%      0     0     1
% ]
% 
% L = [
%    15.0196    0.5900
%    -2.7287   18.9345
%     0.6038   44.9804
%    22.1715  435.4379
% ]

% A = 1.0e+03 * [
%          0    0.0010         0         0
%          0   -0.4350   -0.0061    0.0091
%          0         0         0    0.0010
%          0    1.9034    0.0620   -0.0400
% ]
% 
% B = [
%          0
%    20.6000
%          0
%   -90.0000
% ]
% 
% C = [
%      1     0     0     0
%      0     0     1     0
% ]
% 
% D = [
%      0
% ]
% 
