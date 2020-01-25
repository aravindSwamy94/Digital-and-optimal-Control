function B=FindLowRankLambdaApprox(A, k,lambda)
    [u,s,v]=svd(A);
    sig = diag(s);
    N = length(sig);
    sig = sig(1:k); % k-biggest
    n = length(sig);
    A = ones(1,n);
    b = lambda;
    H = eye(n);
    f = -sig(:);
    lb = zeros(n,1);
    x = quadprog(H,f,A,b,[],[],lb,[],[],optimset('Display','off'));
    x = [x; zeros(N-k,1)];
    B = u*diag(x)*v';
end

    
    
    