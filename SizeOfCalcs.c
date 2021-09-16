#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	char a0 = 0;
	short a = 0;
	int b = 0;
	long c = 0;
	long long d = 0;

	float e = 0.0;
	double f = 0.0;
	long double g = 0.0;

	int charBytes = sizeof(a0);
	int shortBytes = sizeof(a);
	int intBytes = sizeof(b);
	long longBytes = sizeof(c);
	long long longLongBytes = sizeof(d);

	int floatBytes = sizeof(e);
	int doubleBytes = sizeof(f);
	int longDoubleBytes = sizeof(g);

	printf("\nNumber of Bytes:\nChar %d\nShort %d\nInt %lli\nLong %lli\nLong Long %llu\n", 
		charBytes, shortBytes, intBytes, longBytes, longLongBytes);

	printf("Float %d\nDouble %d\nLong Double %d\n\n",
		floatBytes, doubleBytes, longDoubleBytes);

	int charMaxSize = pow(2,charBytes*8-1);
	int shortMaxSize = pow(2,shortBytes*8-1);
	int intMaxSize = pow(2,intBytes*8-1);
	long longMaxSize = pow(2,longBytes*8-1);
	long long longLongMaxSize = pow(2,longLongBytes*8-1);

	printf("Largest Signed Number:\nChar %d\nShort %d\nInt %lli\nLong %lli\nLong Long %llu\n", 
		charMaxSize, shortMaxSize, intMaxSize, longMaxSize, longLongMaxSize);

	//pointers
	int aa* = &a;

	printf("%d\n", a);  //this should print the value of a
	printf("%d\n", aa); //address of a
	printf("%d\n", *aa); //this should print the value of a

	*aa = 7; //changes the value of a to 7

	int x[10];

	//x is a pointer to x[0]

	int b* = x; //b is a curser

	for (int i = 0; i < 10; i++)
	{
		x[i] = i;

		*b = i;
		b++; //changes the pointer to the next element of the array's pointer
	}


	return 0;
}