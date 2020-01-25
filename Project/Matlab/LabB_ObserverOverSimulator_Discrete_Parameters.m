close all;
clc;

% select the sampling time
fSamplingPeriod = 0.01;

Cd = [1 0 0 0;0 0 1 0];

Dd= 0;

Ad = sysd.A;

Bd= sysd.B;

factor = 10;

Ld = (place(Ad',Cd',polesd))';

C_accd = Cd(1,:);

C_acc_bard = Cd(2,:);

T_invd = [C_accd;0 1 0 0;0 0 1 0 ;0 0 0 1];

Td = inv(T_invd);

A_hatd = T_invd*Ad*Td;

B_hatd = T_invd*Bd;

C_acc_hatd= C_accd*Td;

C_acc_bar_hatd= C_acc_bard*Td;

A_yyd = A_hatd(1,1);

A_yxd = A_hatd(1:1,2:4);

A_xyd = A_hatd(2:4,1:1);

A_xxd = A_hatd(2:4,2:4);

B_yd = B_hatd(1,1);

B_xd = B_hatd(2:4,1:1);

C_yd = C_acc_bar_hatd(1,1);

C_xd = C_acc_bar_hatd(1:1,2:4);

AAd = A_xxd;

CCd = [1 0 0; 0 1 0];

L_newd = (place(AAd', CCd' , [polesd(1) polesd(2) polesd(3)]))';

L_accd = L_newd(1:3,1:1);

L_acc_bard = L_newd(1:3,2:2);

Md1 = A_xxd - (L_accd* A_yxd) - (L_acc_bard* C_xd);

Md2 = B_xd - (L_accd*B_yd);

Md3 = A_xyd - (L_accd* A_yyd) - (L_acc_bard*C_yd);

Md4 = L_acc_bard;

Md5 = L_accd;

Md6 = Td(1:4,1:1);

Md7 = Td(1:4,2:4);



figure;
plot(x_w.time,x_w.signals.values(:,1))
title('x_w for complete system')

figure;
plot(theta_b.time,theta_b.signals.values(:,1))
title('theta_b for complete system')

figure ;
plot(u.time,u.signals.values);
title('u input')

% Ld = [
% 	0.0723    0.0028
%     0.0015    0.0464
%     0.0030    0.2118
%     0.0399    2.1508
% ]
% 
% 
% Md1 = [
%     0.1066   -0.0417    0.0156
%    -0.0561    0.9865    0.0029
%     0.5176    0.0215    0.8387
% ]
% 
% Md2 = [
%     0.0355
%    -0.0048
%    -0.3641
% ]
% 
% Md3 = 1.0e+03 * [
%    -0.0288
%    -0.0316
%    -1.4370
% ]
% 
% Md4 = [
%     0.0331
%     0.0152
%     0.2480
% ]
% 
% Md5 = 1.0e+03 * [
%     0.0288
%     0.0316
%     1.4370
% ]
% 
% Md6 = [
%      1
%      0
%      0
%      0
% ]
% 
% Md7 = [
%      0     0     0
%      1     0     0
%      0     1     0
%      0     0     1
% ]
% 
% Ad = [ 
%     1.0000    0.0022   -0.0000    0.0001
%          0    0.1691   -0.0096    0.0173
%          0    0.0124    1.0006    0.0047
%          0    3.6345    0.2183    0.9237
% ]
% 
% Bd = [ 
%     0.0001
%     0.0394
%    -0.0006
%    -0.1715
% ]
% 
% Cd = [ 
%      1     0     0     0
%      0     0     1     0
% ]
% 
% Dd = [
%      0
%      0
% ]

