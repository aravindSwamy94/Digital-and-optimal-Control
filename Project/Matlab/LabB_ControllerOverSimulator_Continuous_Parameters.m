close all;
clc;

afPoles =[-5.6 -843.1 -4 -4];
K = acker(A,B,afPoles);

% sys_test = tf([1],[-3 -843 -3 -3]);
% order_test = order(sys_test)
%K = [ -10.0000  -57.4908 -105.0371  -19.5009 ];
%[−17.6405 − 38.8205 − 52.5060 − 8.9724];