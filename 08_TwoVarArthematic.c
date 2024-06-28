#include<stdio.h>
int main()
{
	int a = 40;
	int b = 38;

	int add = a + b;
	int sub = a - b;
	int mult = a * b;
	int mod = a % b;
	float div = ((float)a) / b;

	printf("addition = %d\nsubraction = %d\nmultiplication = %d\nmodulus = %d\ndivision = %f",add,sub,mult,mod,div);

	return 0;
}