#include <stdio.h>
#include <string.h>
int main()
{
	int i,A,N,K=0;
	char S[1000];
	while(1)
	{
		K=0;
	scanf("%d",&A);
	if(A==0)
	{
		break;
	}
	for(i=0;i<A;i++)
	{
		scanf("%d %[^\n]",&N,&S);
		if(S[0]=='s')
		{
			K+=N*120;
		}
		else if(S[0]=='m' && S[1]=='o')
		{
			K+=N*85;
		}
		else if(S[0]=='m' && S[1]=='a' && S[2]=='m')
		{
			K+=N*85;
		}
		else if(S[0]=='g')
		{
			K+=N*70;
		}
		else if(S[0]=='m' && S[1]=='a' && S[2]=='n')
		{
			K+=N*56;
		}
		else if(S[0]=='l')
		{
			K+=N*50;
		}
		else if(S[0]=='b')
		{
			K+=N*34;
		}
	}
	if(K<110)
		{
			printf("Mais %d mg\n",110-K);
		}
		else if(K>130)
		{
			printf("Menos %d mg\n",K-130);
		}
		else
		{
			printf("%d mg\n",K);
		}
	}
		return 0;
	}
	
