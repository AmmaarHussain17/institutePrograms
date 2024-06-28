#include <stdio.h>
int main()
{
	int preRead = 1000;
	int curRead = 1300;
	int tuc = curRead - preRead;

	float puc = 5.00;

	float bill = tuc * puc;

	printf("Electric Bill = %f\n",bill);
	
	return 0;

}