% Step is determined by the brazilian paper... (Armijo rule)
function [NewMAT, Error] = MatApproxSpectralStep(A, Init, Zone, lambda, N,disp)
if nargin<6
    disp=0;
end

NewMAT = Init;
for ii = 1:N
    
    %NewMAT = NewMAT.*(1-Zone)+Zone.*A;
    Grad = Zone.*(NewMAT-A);
    [Step,l]=FindBestStepSpectral(NewMAT, A,Zone, lambda);
    fprintf('Step=%g, l=%d \n',Step,l);
    NewMAT = NewMAT-Grad*Step;
    %  NewMAT = ReduceRank(NewMAT, k);
    NewMAT = FindBestSpectralApprox(NewMAT, lambda);
    %
    
    Err=SpectralNorm(Zone.*(NewMAT-A));
    ErrFrob=sqrt(sum2((Zone.*(NewMAT-A)).^2));
    ErrNuclear=SingularLpNorm(Zone.*(NewMAT-A), 1);
    
    Error(ii) = ErrFrob;
    ErrorF(ii) = ErrFrob;
    ErrorN(ii) = ErrNuclear;
    
    if mod(ii,1)==0
        fprintf('Iteration = %d, Error (Spectral)=%5.10g, Error (nuclear)=%g, Error Frob=%g  \n',ii,Error(ii),ErrorN(ii), ErrorF(ii));
    end
    
end

if disp
    figure;
    plot(Error); title('Convergence, Spectral norm');
   
    figure;
    plot(ErrorF); title('Convergence, Frobenius norm');
    
    figure;
    plot(ErrorN); title('Convergence, Nuclear norm');
    
    
    [~,j]=min(Error);
    if j<length(Error)
        [m,n]=max(Error(j+1:end));
        fprintf('not monotically decreasing!, %g, min index=%d, after min peak index=%d \n',m-Error(j), j, n+j);
        fprintf('max diff error = %g \n',max(diff(Error)));
        figure; hold on
        plot(j, Error(j),'ro');
        plot(n+j,Error(n+j),'ro');
    end
end

fprintf('Spectral norm = %g \n',Error(end));
%
% figure
% hold on; plot(1:N, nnNewMAT, 'r', 1:N, nnA*ones(N,1), 'b');

