#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int t = a;
		a = b;
		b = t;

	printf("a = %d\nb = %d",a,b);

	return 0;

}