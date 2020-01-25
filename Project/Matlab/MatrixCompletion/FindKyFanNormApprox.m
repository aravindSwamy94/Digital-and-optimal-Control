function B=FindKyFanNormApprox(X, k,lambda)
% Note: This code might be wrong.    
    tao = 1000;
    [u,s,v]=svd(X);
    sig = diag(s);
    N = length(sig);
    all_sig = sig;
    if sum(sig(1:k))<lambda
        B=X;
        return;
    end
    %sig = sig(1:k); % Take k-largest singular values
    n = length(sig);
    %A = ones(1,n);
    A = [ones(1,k) zeros(1,n-k)];
    %A = [ones(1,k) tao*ones(1,n-k)];
    %Aeq = [zeros(1,k) ones(1,n-k)];  beq = 0;
  %  Aeq=[]; beq=[];
    b = lambda;
    H = eye(N);
    f = -sig(:);
    if lambda > all_sig(k+1)
        lb = all_sig(k+1)*ones(k,1);
    else
        lb = zeros(k,1);
    end
    x = quadprog(H,f,A,b,[],[],lb,lambda,[],optimset('Display','off')); %
    %rest_val = min(x(k)*ones(N-k,1), all_sig(k+1:end));
    %x=[x; rest_val];
    %x = quadprog(H,f,A,b,Aeq,beq,lb,[],[],optimset('Display','off'));
    %x = qpas(H,f,A,b,Aeq,beq,lb,[],0); % The same with QPC package
    %x = [x; zeros(N-k,1)];
    B = u*diag(x)*v';
end

    
    
    