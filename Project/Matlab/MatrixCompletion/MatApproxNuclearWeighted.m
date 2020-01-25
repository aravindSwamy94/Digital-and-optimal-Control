
function [NewMAT, Error] = MatApproxNuclearWeighted(A, Init, Zone, Weights, lambda, N, tol, display)
% This function performs matrix approximation when including only some
% entries. In other words, it solves the problem NewMAT = argmin
% ||(NewMAT-A).*Zone||_F, s.t. ||NewMAT||_*<=lambda. Because of convexity
% the solution is global/optimal.
%
% Coded by Gil Shabat, 2012

if nargin<8
    display=1;
end

NewMAT = Init;
S=sum2(Zone);
ii=0;
ErrFrob = inf;
while (ii<=N) && (ErrFrob > tol)
    NewMAT = NewMAT.*(1-Zone)+Zone.*A;
    NewMAT = FindNuclearNormApproxWeighted(NewMAT, lambda, Weights);
    ErrFrob=sqrt(sum2((Zone.*(NewMAT-A)).^2))/S;
    if display
        fprintf('ii=%d, %g \n',ii,ErrFrob);
    end
    ii=ii+1;
    Error(ii) = ErrFrob;
    if ii>2
        Diff = Error(ii)-Error(ii-1);
        %fprintf('\t Diff=%f ',Diff);
        if abs(Diff)<tol/1000
            if display
                fprintf('Diff too small \n');
            end
            return;
        end
    end
    %fprintf('\n');
end

end

