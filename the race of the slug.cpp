#include<stdio.h>
int main()
{
	int L,i,V,C=0;;
	while(1);
	{
		scanf("%d",&L);
	for(i=0;i<L;i++)
	  {
		scanf("%d",&V);
		if(V>C)
		{
		C=V;
		}
      }
	    if(C<10)
	    {
		printf("1");
		}	
		else if(C>=10 && C<20)
		{
			printf("2");
		}
		else if(C>=20)
		{
			printf("3");
		}
		
	}
return 0;
}
