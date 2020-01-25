clc;
clear all;
b =100;
m = 1000;
G_s = tf([1],[1000 100]);
MP =20;
t_s = 8;
zeta = 0.7 %0.6*(1-(MP/100));
w_n= 4.6/(t_s * zeta);
kp = (2*zeta*w_n*m) - b ;
ki = m* (w_n^2);
cont = pid(kp,ki,0);
new = (G_s*cont) / (1+ (G_s*cont));
s = stepinfo(new)