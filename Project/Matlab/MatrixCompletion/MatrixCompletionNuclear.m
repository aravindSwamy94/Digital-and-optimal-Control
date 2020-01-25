function NewMAT = MatrixCompletionNuclear(A, Zone,N)
% Complete the matrix A, where Zone=0, such that the nuclear norm is
% minimal.
min_lambda = 0;
max_lambda = sum(svd(A));
err = inf;
tol = 0.0001;
NewMAT = A;
lambda = inf;
lambda_prev = 0;
lambda_tol = 1e-6;
err = inf;
Done = false;
Counter = 0;
while ((err > tol) || (abs(lambda-lambda_prev) > lambda_tol))
    Counter=Counter+1;
    lambda_prev = lambda;
    lambda=(min_lambda+max_lambda)/2;
    [NewMAT, Error] = MatApproxNuclear(A.*Zone, A.*Zone, Zone, lambda, N);
    err = Error(end);
    if Error(end) > tol
        min_lambda=lambda;
    else
        max_lambda=lambda;
    end
end

end

