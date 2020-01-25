function X = FindBestSpectralApprox(M, lambda)
% Finds the best approximation X, to a givem matrix M, such that
% ||X||<=lambda. The norm is the spectral norm (largest singular value).
    [u,s,v]=svd(M);
    s(s>lambda)=lambda;
    X=u*s*v';
end
    