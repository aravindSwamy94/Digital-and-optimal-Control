function NewMAT = MatrixCompletionSpectral(A, Zone, N, MaxSpectral, MaxIter)
% This function solves the following matrix completion
% problem:
% Minimize ||X||_2, s.t. X.*Zone==A.*Zone
Current = MaxSpectral/2;
Prev = inf;
Error = inf;
SpectralTol = 0.01;
tol = 1e-6;
Iter=1;
while ((Error>tol) || (Prev-Current > SpectralTol))
    NewMAT = MatApproxSpectral(A, A, Zone, Current, N, 1,0);
    Error = sum2(((A-NewMAT).*Zone).^2);
    Prev = Current;
    if Error > tol
        Current = (Current+MaxSpectral)/2;
    else
        Current = Current/2;
    end
    Iter=Iter+1;
    if Iter > MaxIter
        break;
    end
end

end

        
        
    
    


