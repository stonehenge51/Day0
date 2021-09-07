#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
	int x; //declaration
	x = 0; //Intialization
	int y = 4; //above combined

	int z;
	z = x + y;

	printf("Hello World!\n%d + %d = %d", x,y,z);

	float x1 = 0.555e7;
	double x2 = 0.55e7;

	int a,b,c;

	a = 1;
	b = 2;
	c = a / b;
	printf("a / b = c\n%d / %d = %d",a,b,c);

	double y1 = sin(x1);

	double z1 = pow(y1,2);
	double z1 = y1 * y1;

	double y2[50];

	int n = 20;
	const int a = 20;
	double y2[n];

	y[3] = 2.879;
	y[0] = 152.215;
	y[14] = 75;

	y[5] = y[3] + y[0];

	double x3 = 0;

	for(int i = 0; i < n; i++)
	{
		printf("Element %d of Array y\ny%d = %d"i,i,y[i]);
		x3 = x3 + y[i];
	}
	printf("the Sum of the Array y is %d",x3);

	while(i<n)
	{

	}

	do //runs at least once
	{

	}
	while(i < n)


	



	return 0;
}