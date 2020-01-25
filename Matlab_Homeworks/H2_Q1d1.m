clc;
clc;
bode(new);
b = bandwidth(new);
b_Hz = b/(2*pi);
sampling_time = 1/(6*b_Hz)