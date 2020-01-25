clc;

C_bar = [11 5 10 1];

row = 0.1;

sampling_freq = 35;

fSamplingPeriod= round(1/sampling_freq,3);

oldpoles = [-843.1 -5.6 -4 -4];

poles_d = exp(oldpoles*fSamplingPeriod);

poles_factor= 6;

poles_d = poles_d.^poles_factor;

poles_d = [0.3 0.4 0.4 0];

Cd = [1 0 0 0;0 0 1 0];

Dd= 0;

robot_lqr_obs = ss(A,B,Cd,Dd);

robot_lqr_obs_discrete = c2d(robot_lqr_obs,fSamplingPeriod,'tustin');

Ad = robot_lqr_obs_discrete.A;

Bd= robot_lqr_obs_discrete.B;

Kd_lqr = dlqr(Ad,Bd,C_bar'*C_bar,row);

Ld_lqr = (place(Ad',Cd',poles_d))';

C_accd_lqr = Cd(1,:);

C_acc_bard_lqr = Cd(2,:);

T_invd_lqr = [C_accd_lqr;0 1 0 0;0 0 1 0 ;0 0 0 1];

Td_lqr = inv(T_invd_lqr);

A_hatd_lqr = T_invd_lqr*Ad*Td_lqr;

B_hatd_lqr = T_invd_lqr*Bd;

C_acc_hatd_lqr= C_accd_lqr*Td_lqr;

C_acc_bar_hatd_lqr= C_acc_bard_lqr*Td_lqr;

A_yyd_lqr = A_hatd_lqr(1,1);

A_yxd_lqr= A_hatd_lqr(1:1,2:4);

A_xyd_lqr = A_hatd_lqr(2:4,1:1);

A_xxd_lqr = A_hatd_lqr(2:4,2:4);

B_yd_lqr = B_hatd_lqr(1,1);

B_xd_lqr= B_hatd_lqr(2:4,1:1);

C_yd_lqr = C_acc_bar_hatd_lqr(1,1);

C_xd_lqr = C_acc_bar_hatd_lqr(1:1,2:4);

AAd_lqr = A_xxd_lqr;

CCd_lqr = [1 0 0; 0 1 0];

L_newd_lqr = (place(AAd_lqr', CCd_lqr' , [poles_d(1) poles_d(2) poles_d(3)]))';

L_accd_lqr = L_newd_lqr(1:3,1:1);

L_acc_bard_lqr = L_newd_lqr(1:3,2:2);

Md1_lqr = A_xxd_lqr - (L_accd_lqr* A_yxd_lqr) - (L_acc_bard_lqr* C_xd_lqr);

Md2_lqr = B_xd_lqr - (L_accd_lqr*B_yd_lqr);

Md3_lqr = A_xyd_lqr - (L_accd_lqr* A_yyd_lqr) - (L_acc_bard_lqr*C_yd_lqr);

Md4_lqr = L_acc_bard_lqr;

Md5_lqr = L_accd_lqr;

Md6_lqr = Td_lqr(1:4,1:1);

Md7_lqr = Td_lqr(1:4,2:4);