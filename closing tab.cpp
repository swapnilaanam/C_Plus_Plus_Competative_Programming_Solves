#include <stdio.h>
int main()
{
	int i,N,M,C=0;
	scanf("%d %d",&N,&M);
	C=N;
	char K[10];
	for(i=0;i<M;i++)
	{
		scanf("%s",&K);
	if(K[0]=='f')
	{
	C++;	
		}	
	else if(K[0]=='c')
	{
	C--;
    }
	}
	printf("%d\n",C);
	return 0;
}
