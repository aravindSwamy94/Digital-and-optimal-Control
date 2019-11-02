clc;
p1= e(2);
p2= e(3);
p3 = e(4);
p3n = -3.0;
k = -156.7;
kp = ((p1*p3n)+(p2*p3n) - (p1*p3) - (p2*p3))/k;
ki = ((p1*p2*p3 )- (p1*p2*p3n))/k;
kd = (p3-p3n)/k;
controller_s = pid(kp,ki,kd);
P_S = feedback((controller_s*H),1)
step(P_S);

% %p values for poles. p3p is the assumed pole to make the system stable
% p1= -843
% p2= -5.64
% p3= 5.68
% p3p= -3
% k= -156.7 %System gain
% 
% 
% Kp= ((p1*p3p)+ (p2*p3p)-(p1*p3)-(p2*p3))/k
% Ki= ((p1*p2*p3)-(p1*p2*p3p))/k
% Kd= (p3-p3p)/k
% 
% Kp
% Ki
% Kd
% 
% 
% %PID feedback
% Gc= pid(Kp, Ki, Kd) 
% 
% Mc= feedback (Gc*G, 1) %2nd closed loop tf
% step (Mc)
% grid on
% %Mc is the control loop feedback
% Gc
