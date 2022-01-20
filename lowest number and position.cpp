#include<stdio.h>
int main()
{
	int N,i,j;
	scanf("%d",&N);
	int X[N],min=X[0];
	for(i=0;i<N;i++)
	{
	scanf("%d",&X[i]);
	if(X[i]<min)
	{
	min=X[i];
	j=i;
	}
    }
	printf("Menor valor: %d\nPosicao: %d\n",min,j);
	return 0;
}
