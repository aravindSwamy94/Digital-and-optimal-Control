#include<math.h>
#include<mex.h>
using namespace std;

void FindWeightsBudget(double *x, double budget, double *out, int n)
{
  double Sum = 0;
  double to_give = 0;
  
/*
  if (mxGetN(prhs[0]) != 1){
      mexErrMsgTxt("Error: 'x' Should be a column vector");
  }*/
  for (int i = 0; i < n; i++)
    Sum += x[i];
  if (budget >= Sum)
  {
    for (int i = 0; i < n; i++)
      out[i] = x[i];
    return;
  }
  int i = 0;
  double top = x[0];
	while (budget > 0 && i < n)
	{
		while ((i < n - 1) && (fabs(x[i] - x[i + 1]) < 1e-10))
			++i;
		int j = i + 1;
		double t = j * (x[i] - ((j < n) ? x[j] : 0));
		to_give = (t < budget ? t : budget);
		top -= to_give / j;
		budget -= to_give;
		++i;
	}
    
    //mexPrintf("top = %f\n", top);
    
	for (int i = 0; i < n; ++i)
	{
		if (x[i] > top)
			out[i] = x[i] - top;		
	}
}
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
/* Solves the following problem, which is a special case of quadratic programming:
 * Given sorted positive numbers x1 >= ...>= xn >=0
 * Minimize sum (yi-xi)^2, s.t. sum(y) <= B, yi >= 0
 * 
 * Coded by Gil and Nir Shabat
*/
{
  long int n = mxGetM(prhs[0]);
  double* x = mxGetPr(prhs[0]);
  plhs[0] = mxCreateDoubleMatrix(n,1,mxREAL);
  double* out = mxGetPr(plhs[0]);
  double budget = mxGetScalar(prhs[1]);
  FindWeightsBudget(x, budget, out, n);
}