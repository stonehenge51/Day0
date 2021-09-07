#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	const int n = 10;
	double x[] = {1,2,3,4,5,6,7,8,9,0};
	double y = 0;
	double z = 0;
	double mean = 0;
	double stddev = 0;

	for(int i = 0;i <= n; i++)
	{
		if(i == n)
		{
			mean = y / i;
		}
		else
		{
			y = y + x[i];
		}
	}

	for(int i = 0;i <= n; i++)
	{
		if(i == n)
		{
			z = z /(n - 1);
			stddev = sqrt(z);
		}
		else
		{
			z = z + pow(x[i]-mean,2);
		}
	}

	printf("The mean is %0.4f\nThe standard of deviation is %0.4f", mean, stddev);
				
}