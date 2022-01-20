#include<stdio.h>
int main()
{
	int i,N,T,k=1;
	scanf("%d",&N);
	int J[N],min=J[0];
	for(i=0;i<N;i++)
	{
		scanf("%d",&J[i]);
		if(J[i]<min)
		{
			min=J[i];
			k=i+1;
		}
}
		printf("%d\n",k);
	return 0;
}
