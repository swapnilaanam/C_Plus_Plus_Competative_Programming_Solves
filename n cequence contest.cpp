#include<stdio.h>
int main()
{
	int i,j,T,N,C;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		C=0;
		scanf("%d",&N);
		for(j=1;j<=N;j++)
		{
			C+=j*j;
		}
		for(j=1;j<=N;j++)
		{
			C+=((N-j)*(N-j));
		}
		printf("%d\n",C);
	}
	return 0;
}
