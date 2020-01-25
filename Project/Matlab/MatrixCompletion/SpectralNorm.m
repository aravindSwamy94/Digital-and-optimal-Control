function y=SpectralNorm(X)
    y = max(svd(X));
end
