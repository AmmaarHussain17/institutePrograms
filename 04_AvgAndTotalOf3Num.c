#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int total = a + b + c;
	float average = total / 3.0;

	printf("total = %d \naverage = %f",total,average);

	return 0;
}