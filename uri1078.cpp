#include<stdio.h>
int main()
{
	int N,i,x;
	scanf("%d",&N);
	for(i=1;i<=10;i++)
	{
		x=i*N;
		printf("%d x %d = %d\n",i,N,x);
	}
	return 0;
}
