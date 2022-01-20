#include <stdio.h>
#include <string.h>
int main()
{
	int i,T,C=0,K=0;
	scanf("%d",&T);
	int N;
	for(i=0;i<T;i++)
	{
		scanf("%d",&N[i]);
	}
	K=strlen(N);
	for(i=1;i<T;i++)
	{
		if(N[i]>N[i+1])
		{
			C++;
		}
	}
	if(N[K]<N[K-1])
	{
		printf("%d",C);
	}
	return 0;
}
