#include <stdio.h>
int main()
{
	int X;
	double Y;
	scanf("%d %lf",&X,&Y);
	
	if(X%5==0 && X+0.50<=Y)
	{
		printf("%.2lf\n",Y-X-0.50);
	}
	else
	{
	   printf("%.2lf\n",Y);	
	}
	return 0;
}
