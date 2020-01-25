function [NewMAT, Error] = MatApproxSpectral(A, Init, Zone, lambda, N, tol)
% This function performs matrix approximation when including only some
% entries. In other words, it solves the problem NewMAT = argmin
% ||(NewMAT-A).*Zone||_F, s.t. ||NewMAT||_2<=lambda. Because of convexity
% the solution is globnal/optimal.
NewMAT = Init;
ii=0;
S = sum2(Zone);
ErrFrob = inf;
while (ii<=N) && (ErrFrob>tol)
    Grad = Zone.*(NewMAT-A);
    NewMAT = NewMAT-Grad; 
    NewMAT = FindBestSpectralApprox(NewMAT, lambda);
    ErrFrob=sqrt(sum2((Zone.*(NewMAT-A)).^2))/S;
    ii=ii+1;
    Error(ii) = ErrFrob;
end

end
