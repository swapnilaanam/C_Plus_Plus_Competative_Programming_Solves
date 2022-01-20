#include <stdio.h>
int main()
{
	int p,j1,j2,r,a,sum;
	scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
	sum=j1+j2;
	if((r==1 && a==0) || (r==0 && a==1))
	printf("Jogador 1 ganha!\n");
	else 
	printf("Jogador 2 ganha!\n");
	if((p==1 && sum%2==0) || (p==0 && sum%2==1))
	printf("Jogador 1 ganha!\n");
	else if(r==1 && a==1)
	printf("Jogador 2 ganha!\n");
	return 0;
}
