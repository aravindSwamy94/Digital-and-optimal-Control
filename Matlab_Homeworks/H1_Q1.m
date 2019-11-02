clc;
clear;

syms z
S = z/(z^2*(z-0.9)*(z-0.6));
A = iztrans(S);
B =@(n) (50*kroneckerDelta(n - 1, sym(0)))/27 - (250*(3/5)^n)/27 + (1000*(9/10)^n)/243 + (1250*kroneckerDelta(n, sym(0)))/243;
R = zeros(1,10);
for c = 0:1:9
    R(c+1) = B(c);
end

R
x= zeros(1,10);
x(1) = 0;
x(2) = 0;
for n = 1:7
      x(n+3)=(1.5*x(n+2))-(0.54*x(n+1))+ (kroneckerDelta(n-1,sym(0)));
end

x