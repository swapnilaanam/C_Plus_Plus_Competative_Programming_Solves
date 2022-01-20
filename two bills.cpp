#include <stdio.h>
int main()
{
	int i,N,M,J,C;
	int Z[15]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
	while(1)
	{
	scanf("%d %d",&N,&M);
	if(N==0 && M==0)
	{
		break;
	}
	J=M-N;
	C=0;
	
	for(i=0;i<15;i++)
	{
	if(J==Z[i])
	{
		C=1;
		break;
	}
    }
	if(C)
	{
		printf("possible\n");
	}
	else
	{
		printf("imposibble\n");
	}
    }
	return 0;
	
}
