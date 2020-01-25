function [NewMAT, Error] = MatApproxRank(A, Init, Zone, NewRank, N, Bounds)
% This function performs matrix approximation when including only some
% entries. In other words, it solves the problem NewMAT = argmin
% ||(NewMAT-A).*Zone||, s.t. rank(NewMAT)<=NewRank. The norm is the
% Frobenius norm. Note that because of the non-convexity of the rank, the
% solution is local and not global.
if nargin<6
    Bounds(1)=inf;
    Bounds(2)=-inf;
end
NewMAT = Init;
E = ones(size(A));
E(NewRank+1:end,NewRank+1:end)=0;
Error = zeros(N,1);
for ii = 1:N
    NewMAT = NewMAT-Zone.*(NewMAT-A);
    [u,s,v]=svd(NewMAT);
    NewMAT = u*(E.*s)*v';
    NewMAT(NewMAT<Bounds(2))=Bounds(2);
    NewMAT(NewMAT>Bounds(1))=Bounds(1);    
    Error(ii) = sqrt(mean2(abs(NewMAT.*Zone-A.*Zone).^2));
end
end