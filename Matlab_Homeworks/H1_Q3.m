clear all;
clc;
h=1;
syms z
P = exp(-0.7*(z-1/(z*h))) * (z^2*h^2)/((z-1)^2 + (0.8*(z-1)*z*h) + (0.5*(z*h)^2))
PID = 