#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double generalPoly(double x, int orderP, double* c)
{
	double y = c[0];
	// can't use sizeof(c) beacause c is only a pointer
	for(int i = 1; i <= orderP; i++)
	{
		y = y + c[i] * pow(x,i);
	}

	return y;
}

void dPoly(int orderP, double* cF, double* cdF)
{
	for(int i = 1; i <= orderP; i++)
	{
		cdF[i-1] = cF[i] * i;
	}
}

double newton_raphson(int orderP, double* c, double tolerance, double x0)
{
	double x = x0;
	double F, dF, delta;
	double cdF[orderP-1];

	dPoly(orderP, c, cdF);

	do
	{
		F = generalPoly(x, 3, c);
		dF = generalPoly(x, 2, cdF);

		delta = - F/dF;

		x += delta;
	}
	while(fabs(delta) > tolerance || i < 1000);

	return x;
}

int main()
{
	double cf[4] = {-3.0,1.0,0,2.0};
	double x = newton_raphson(3, cf, 1e-9, 0.0)
	printf("Root = %g\n",x);

	return 0;
}