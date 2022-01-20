#include <stdio.h>
int main()
{
	int i,T,N,M,L;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d %d",&N,&M,&L);
		if(L==1)
		{
			printf("%.2d:%.2d - A porta abriu!\n",N,M);
		}
		else
		{
			printf("%.2d:%.2d - A porta fechou!\n",N,M);
		}
	}
	return 0;
}
