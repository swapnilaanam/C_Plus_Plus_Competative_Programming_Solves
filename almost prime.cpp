#include <stdio.h>
int main()
{
	int i,T,j,C,K=0,M=0,L=0;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		C=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				C++;
			}
		}
		if(C==2)
			{
				L=C;
		for(j=1;j<=i;j++)
		{
			if(j%L==0)
			{
				M++;
			}
		}
	}
    }
	printf("%d\n",M);
	return 0;
}
