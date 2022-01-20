#include <stdio.h>
int main()
{
	int i,N,M,C;
	while(1)
	{
		C=0;
			scanf("%d %d",&N,&M);
			if(N==0 && M==0)
			{
				break;
			}
			C=N*M;
			printf("%d\n",C);
		}
		return 0;
}
