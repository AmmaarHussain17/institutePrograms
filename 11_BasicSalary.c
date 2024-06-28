#include<stdio.h>
int main()
{
	float basicSalary = 10000.00;

	float hra = 0.40 * basicSalary;
	float da = 0.30 * basicSalary;
	float pf = 0.30 * basicSalary;
	float it = 0.10 * basicSalary;
	
	float netSalary = basicSalary + hra + da - pf - it;
	
	printf("hra = %f\nda = %f\npf = %f\nit = %f\nnetSalary = %f\n",hra,da,pf,it,netSalary);
	
	return 0;

}