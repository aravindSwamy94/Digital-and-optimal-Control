clc;
C_bar = [11 5 10 1];
W = [1 0 0 0;0 3 0 0; 0 0 10 0;0 0 0 10];
robot_lqr = ss(A,B,C_bar,D);
H_s = tf(robot_lqr);
H_s_num_n = [H_s.Numerator{1,1}(1,1) -H_s.Numerator{1,1}(1,2) H_s.Numerator{1,1}(1,3) -H_s.Numerator{1,1}(1,4) H_s.Numerator{1,1}(1,5)];
H_s_num_d = [H_s.Denominator{1,1}(1,1) -H_s.Denominator{1,1}(1,2) H_s.Denominator{1,1}(1,3) -H_s.Denominator{1,1}(1,4) H_s.Denominator{1,1}(1,5)];
H_s_n = tf(H_s_num_n,H_s_num_d);
rlocus(H_s_n * H_s);
row = 0.1;
K_lqr =lqr(robot_lqr,C_bar'*C_bar,row)