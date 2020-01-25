function B=FindNuclearNormApproxWeighted(A, lambda, Weights)
% Finds the best LS approximation X, to a givem matrix M, such that
% ||X||w<=lambda. The norm is the weighted nuclear norm (sum of singular values).
% ||X||w = sum w_i\sigma_i ...
% If the user sets the weights to be 1, we get the nuclear norm
    [u,s,v]=svd(A,'econ');
    sig = diag(s);
%     if sum(sig)<lambda
%         B=A;
%         return;
%     end
    n = length(sig);
    b = lambda;
    H = eye(n);
    f = -sig(:);
    lb = zeros(n,1);
    %x = quadprog(H,f,A,b,[],[],lb,[],[],optimset('Display','off'));
    %x = quadprog(H,f,[],[],Weights,b,lb,0);
    x = qpas(H,f,[],[],Weights,b,lb,[],0); % This line is OK for sure.
    B = u*diag(x)*v';
end

    
    
    