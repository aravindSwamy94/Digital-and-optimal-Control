function [NewMAT, ier] = MatrixCompletion(A, Zone,N, Mode, lambda_tol, tol, display, Weights)
% Inputs:
% A - initial matrix and matrix to complete as determined by Zone
% N - number of iterations
% Mode - Norm to minimize. Can be "spectral", "nuclear" or
% "NuclearWeighted" (the latter is not really a norm, so global convergence
% is not guaranteed
% lambda_tol - Tolerance for the minimal norm found (smaller than
% theoretical minimum+lambda_tol)
% tol - Frobenius norm tolerance
% Weights - Give different weights, should be ascending and relevant only
% to "WeightedNuclear" mode.
%
% Output:
% NewMAT - Matrix after completion
% ier - Success/Fail indicator - 0 - No error.
%
% References: 
% G. Shabat, A. Averbuch "Interest Zone Matrix Approximation", Electronic
% Jounal of Linear Algebra, Vol. 23(1), 2012
%

if nargin<8
    Weights=ones(1,min(size(A)));
elseif nargin<7
    display=1;
    Weights=ones(1,min(size(A)));
end

ier = 0;
min_lambda = 0;
if strcmp(Mode,'nuclear')
    max_lambda = sum(svd(A))*1.1;
elseif strcmp(Mode,'spectral')
    max_lambda = max(svd(A))*1.2; % Factor to ease convergence.
elseif strcmp(Mode,'NuclearWeighted')
    s=svd(A);
    max_lambda = Weights*s;
else
    fprintf('Undefined mode. quitting. \n');
    return;
end
%tol = 0.00001;
NewMAT = A;
lambda = inf;
lambda_prev = 0;
%lambda_tol = 1;
err = inf;
Counter = 0;
Converge=0;
%NewMAT=A.*Zone;
while ((err > tol) || (abs(lambda-lambda_prev) > lambda_tol))
    Counter=Counter+1;
    lambda_prev = lambda;
    lambda=(min_lambda+max_lambda)/2;
    if strcmp(Mode,'nuclear')
        [NewMAT, Error] = MatApproxNuclear(A.*Zone, NewMAT, Zone, lambda, N, tol, display); % Was A.*Zone instead NewMAT in the input
    elseif strcmp(Mode,'spectral');
        [NewMAT, Error] = MatApproxSpectral(A.*Zone, NewMAT, Zone, lambda, N, tol);
    elseif strcmp(Mode, 'NuclearWeighted')
        [NewMAT, Error] = MatApproxNuclearWeighted(A.*Zone, NewMAT, Zone, Weights, lambda, N, tol, display);
    else
        fprintf('Undefined mode. quitting. \n');
        return;
    end
    err = Error(end);
    if Error(end) > tol
        min_lambda=lambda;
    else
        max_lambda=lambda;
    end
    if abs(lambda-lambda_prev) < lambda_tol
        Converge=Converge+1;
    end
    if Converge>4
        if display
            fprintf('Looks like the algorithm failed to converge. There are two options: \n');
            fprintf('Initial matrix norm is too small or more iterations are needed (larger N) \n');
        end
        ier=1;
        return;
    end
    if display
        fprintf('Error=%g, lambda=%g, lambda-lambda_prev=%g, Counter=%d \n',Error(end),lambda, lambda-lambda_prev,Counter);
    end
end

end

        