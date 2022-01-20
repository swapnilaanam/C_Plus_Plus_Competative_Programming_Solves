#include<stdio.h>
int main()
{
	int N[10]={0},i,V;
	scanf("%d",&V);
	for(i=0;i<10;i++)
	{
	N[i]=V;
	V*=2;
	}
    for(i=0;i<10;i++)
    {
    
    printf("N[%d] = %d\n",i,N[i]);
	}
	return 0;
}
