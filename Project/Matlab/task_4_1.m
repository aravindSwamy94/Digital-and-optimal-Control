clc;

% %syms g b_f m_b l_b I_b m_w l_w I_w R_m L_m b_m K_e K_t
a_11 = 0;
a_12 = (2*K_e*K_t/R_m + b_f)/l_w;
a_13 = m_b*l_b*g;
a_14 = -(2*K_e*K_t/R_m + b_f);
a_21 = 0;
a_22 = -(2*K_e*K_t/R_m + b_f)/l_w ;
a_23 = 0;
a_24 = (2*K_e*K_t/R_m + b_f);
b_1 = -(2*K_t)/R_m;
b_2 = (2*K_t)/R_m;
g_11 = m_b*l_b;
g_12 = I_b + (m_b*(l_b^2));
g_21 = (I_w/l_w)+(l_w*m_b)+(l_w*m_w);
g_22 = m_b*l_b*l_w;
Gamma = [1 0 0 0;0 g_11 0 g_12;0 0 1 0;0 g_21 0 g_22];
Alpha = [0 1 0 0; a_11 a_12 a_13 a_14;0 0 0 1;a_21 a_22 a_23 a_24];
Beta = [0;b_1;0;b_2];
A = inv(Gamma)*Alpha;
B = inv(Gamma)*Beta;
C= [0 0 1 0];
D = 0;

