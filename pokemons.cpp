#include <stdio.h>
int main()
{
	int i,j,T,B,A,D,P,X[2];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&B);
		for(j=0;j<2;j++)
		{
			scanf("%d %d %d",&A,&D,&P);
			X[j]=(A+D)/2;
			if(P%2==0)
			{
				X[j]+=B;
			}
		}
		for(j=1;j<2;j++)
		{
			if(X[j]>X[j-1])
			{
				printf("Guarte\n");
			}
			else if(X[j]<X[j-1])
			{
				printf("Dabriel\n");
			}
			else if(X[j]=X[j-1])
			{
				printf("Empire\n");
			}
		}
	}
	return 0;
}
