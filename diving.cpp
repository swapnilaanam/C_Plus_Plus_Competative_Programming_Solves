#include <stdio.h>
int main()
{
	int i,j,T;
	float L,C[7],max=C[0],min=C[0],K;
	char S[20];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		K=0;
		scanf("%s",&S);
		scanf("%f",&L);
		for(j=0;j<7;j++)
		{
			scanf("%f",&C[j]);
			K+=C[j];
		}
		for(j=0;j<7;j++)
		{
			if(C[j]>max)
			{
				max=C[j];
			}
			if(C[j]<min)
			{
				min=C[j];
			}
		}
		K-=max;
		K-=min;
		K=K/L;
		printf("%.2f",K);
	}
	return 0;
}
