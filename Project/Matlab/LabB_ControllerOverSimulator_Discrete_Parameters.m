close all;
clc;

% select the sampling time
%fSamplingPeriod = 0.005;

fSamplingPeriod = 0.01;
sys = ss(A,B,C,D);
sysd = c2d(sys,fSamplingPeriod);
%opt = c2dOptions('Method','tustin');

ed = eig(sysd.A);

oldpoles = [-843.1 -5.6 -4 -4];

polesd = exp(oldpoles*fSamplingPeriod);

Kd = acker(sysd.A,sysd.B,polesd);

%Kd = [-8.1792  -49.1223  -71.4928  -11.5909];
