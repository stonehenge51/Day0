#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	const int n = 10;
	double x[] = {1,2,3,4,5,6,7,8,9,0};
	double total = 0;
	double differences = 0;
	double mean = 0;
	double stddev = 0;
	int i = 0;

	for(i = 0;i < n; i++)
	{
		total = total + x[i];
	}

	mean = total / n;

	for(i = 0;i < n; i++)
	{
		differences = differences + pow(mean - x[i],2);
	}

	stddev = sqrt(differences /(n - 1));

	printf("The mean is %0.4f\nThe standard of deviation is %0.4f", mean, stddev);
				
	
}