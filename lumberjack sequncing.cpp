#include <stdio.h>
int main()
{
	int j,T,N[15],C,U,D;
	while(scanf("%d",&T)==1)
	{
	while(T--)
	{
		for(j=0;j<10;j++)
		{
		scanf("%d",&N[j]);
	    }
	    U=N[0];
	    D=N[1];
	    if(U>D)
		{
			C=0;
	    for(j=0;j<9;j++)
	    {
	    	if(N[j]>N[j+1])
	    	{
	    		C++;
			}
		}
	    }
	else if(U<D)
	{
		     C=0;
			for(j=0;j<9;j++)
			{
			if(N[j]<N[j+1])
			{
				C++;
			}
		    }
		}
		if(C==9)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
    }
	return 0;
}
