clc;
Cn= [1 0 0 0];
F = [Ad-eye(4) Bd;Cn Dd];
Ni = inv(F);
temp = [0;0;0;0;1]
N = mtimes(Ni,temp)
Nxd = N(1:4);
Nud = N(5);

%Nxd=[0,0,0,0];
%Nud=(1-Ad+Bd*Kd_lqr)/([1 0 0 0]*Bd);