clc;

sys = ss(A, B, C, D);
H = tf(sys);
pzplot(sys);
e = eig(A);

%sys = ss(A,B,C,D)
%[num den] = ss2tf(A,B,C,D);
%H = tf(num,den)