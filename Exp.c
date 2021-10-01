#include <stdio.h>
double factorial(double a);
int main(void)
{
	int x, i;
	double j, k;
	k=1;
	printf("몇번 계산 할까요?: ");
	scanf("%d", &x);
	for(i=1;i<=x;i++)
	{
	    j=1/factorial(i);
	    k=k+j;
	}
	printf("exp : %lf\n", k);
	return 0;
}
double factorial(double a)
{
    double i,j;
    j=1;
	for(i=1;i<=a;i++) {
	    j=j*i;
	}
    return j;
}
