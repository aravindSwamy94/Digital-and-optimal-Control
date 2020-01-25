clc;
clear all;
I = [1 0;0 1];
phi = [0.3679 0;0.6321 1];
si = [0.6321;0.3679];
L = [0.1216 0.7911];
C = [0 1];
result = C * inv(I - phi + (si*L)) * si