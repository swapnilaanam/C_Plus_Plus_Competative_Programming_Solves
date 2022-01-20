#include<stdio.h>
int main()
{
	int i,j,N,X,C=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{ 
	scanf("%d",&X);
	for(j=1;j<X;j++)
	{
	if(X%j==0)
	{
	C+=j;
	}
    }
	if(C==X)
	{
		printf("%d eh perfeito\n",X);
	}
	else
	{
		printf("%d nao eh perfeito\n",X);
	}
	C=0;
    }
    return 0;
    }
