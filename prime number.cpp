#include<stdio.h>
int main()
{
	int i,j,N,X,C;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{ 
	scanf("%d",&X);
	for(j=1;j<=X;j++)
	{
	if(X%j==0)
	{
	C++;
	}
    }
	if(C==2)
	{
		printf("%d eh primo\n",X);
	}
	else
	{
		printf("%d nao eh primo\n",X);
	}
	C=0;
    }
    return 0;
    }
