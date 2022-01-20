#include <stdio.h>
int main()
{
	int i,j,N,C[100],D=0;
	scanf("%d",&N);
	for(i=0;i<N+1;i++)
	{
		for(j=0;j<N+1;j++)
		{
			scanf("%d",&C[j]);
		}
		for(j=0;j<N;j++)
        if(C[i]==1)
        {
        	printf("S");
		}
		else
		{
		printf("U");	
		}
	}
return 0;
}
