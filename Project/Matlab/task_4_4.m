clc;
b_21 = b_1;
b_22 = l_b;
b_41 = b_2;
b_42 =  l_w;

Beta_d = [0 0;b_21 b_22;0 0;b_41 b_42];

A = inv(Gamma)*Alpha;
B_d = inv(Gamma)*Beta_d;
Cf= [1 0 0 0;0 1 0 0;0 0 1 0;0 0 0 1];
Df = [0 0;0 0;0 0;0 0];
