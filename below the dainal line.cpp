#include<stdio.h>
int main()
{
	int i,K=0,j;
	double N[12][12],C=0.0;
	char X[2];
	scanf("%s",&X);
	for(i=0;i<12;i++)
	{
	for(j=0;j<12;j++)
	{
		scanf("%lf",&N[i][j]);
	}
    }
    for(i=0;i<12;i++)
    {
    	for(j=0;j<K;j++)
    	{
    		C+=N[i][j];
    }
    K++;
	}
    if(X[0]=='S')
    {
    printf("%.1lf\n",C);
	}
	else if(X[0]=='M')
	{
	printf("%.1lf\n",C/66.0);
	}
	return 0;
	}
