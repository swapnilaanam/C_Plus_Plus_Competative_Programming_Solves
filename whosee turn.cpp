#include <stdio.h>
#include <string.h>
int main()
{
	char A[10],B[10],C[10],D[10];
	long long int i,T,N,M,L;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s %s %s %s",&A,&B,&C,&D);
		scanf("%d %d",&N,&M);
		L=N+M;
		if(B[0]=='P')
		{
		if(L%2==0)
		{
			printf("%s\n",A);
		}
		else
		{
			printf("%s\n",C);
		}
	}
		else if(B[0]=='IMPAR')
		{
		if(L%2==0)
		{
			printf("%s\n",C);
		}
		else
		{
			printf("%s\n",A);
		}
	}
	}
	return 0;
}
