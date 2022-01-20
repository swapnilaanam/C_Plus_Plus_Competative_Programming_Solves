#include <stdio.h>
int main ()
{
	 int i,j,V,U,C=0,D;
	while(scanf("%d %d",&V,&U)!=EOF)
	{
		int L[U];
		for(i=0;i<U;i++)
		{
			scanf("%d",&L[i]);
		}
		for(i=1;i<U;i++)
		{
			if(L[i]>L[i-1])
			{
			D=L[i]-L[i-1];
		}
			else
			{
			D=L[i-1]-L[i];
			}
			if(D<=V)
			{
				C++;
			}
		}
		if(C==U-1)
		{
		printf("YOU WIN\n");
	}
		else
		{
		printf("GAME OVER");
	}
}
	return 0;
}

