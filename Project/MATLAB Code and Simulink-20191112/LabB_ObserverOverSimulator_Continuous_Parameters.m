close all;
clear all;
clc;


LabB_Solutions


% load the PID
kP = -46.6;
kI = -260;
kD = -0.1;


% 
% M1 = 1.0e+03 * [
%    -0.4358   -0.0072    0.0091
%    -0.0011   -0.0340    0.0010
%     1.8717   -0.0165   -0.0400
% ]
% 
% M2 = [
%    20.6000
%          0
%   -90.0000
% ]
% 
% M3 = [
%      0
%      0
%      0
% ]
% 
% M4 = [
%     1.1459
%    33.9942
%    78.4584
% ]
% 
% M5 = [
%     0.7598
%     1.1459
%    31.6987
% ]
% 
% M6 = [
%      1
%      0
%      0
%      0
% ]
% 
% M7 = [
%      0     0     0
%      1     0     0
%      0     1     0
%      0     0     1
% ]
% 
% L = [
%    15.0196    0.5900
%    -2.7287   18.9345
%     0.6038   44.9804
%    22.1715  435.4379
% ]
% 
% A = 1.0e+03 * [
%          0    0.0010         0         0
%          0   -0.4350   -0.0061    0.0091
%          0         0         0    0.0010
%          0    1.9034    0.0620   -0.0400
% ]
% 
% B = [
%          0
%    20.6000
%          0
%   -90.0000
% ]
% 
% C = [
%      1     0     0     0
%      0     0     1     0
% ]
% 
% D = [
%      0
% ]
% 
