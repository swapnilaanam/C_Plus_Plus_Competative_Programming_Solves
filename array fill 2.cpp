#include<stdio.h>
int main()
{
	int N[1000],i,Z=0,X;
	scanf("%d",&X);
	for(i=0,Z=0;i<1000;i++)
	{
	printf("N[%d] = %d\n",i,Z);
	Z++;
	if(Z==X)
	Z=0;
    }
	return 0;
}
