clc;

bode(H);
fSamplingPeriod = 0.01;
H_Z = c2d(H,fSamplingPeriod);
