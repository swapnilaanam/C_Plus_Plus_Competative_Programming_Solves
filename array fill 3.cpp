#include<stdio.h>
int main()
{
	double N[100],X;
	int i;
	scanf("%lf",&X);
	for(i=0;i<100;i++)
	{
	printf("N[%d] = %.4lf\n",i,X);
	X=X/2;
    }
	return 0;
}
