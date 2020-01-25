function B=FindNuclearNormApprox(A, lambda)
% Finds the best LS approximation X, to a givem matrix M, such that
% ||X||<=lambda. The norm is the nuclear norm (sum of singular values).
[u,s,v]=svd(A,'econ');
sig = diag(s);
if sum(sig)<lambda
    B=A;
    return;
end
x = MinimizeSquaredDiffbudget(sig,lambda);
B = u*diag(x)*v';
end



