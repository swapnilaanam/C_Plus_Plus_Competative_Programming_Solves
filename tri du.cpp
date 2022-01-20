#include <stdio.h>
int main ()
{
	int N,M;
	while(scanf("%d %d",&N,&M)!=EOF)
	{
	    if(N==M)
	    {
	    	printf("%d\n",N);
		}
		else if(N>M)
		{
			printf("%d\n",N);
		}
		else 
		{
			printf("%d\n",M);
		}
	}
	return 0;
}
