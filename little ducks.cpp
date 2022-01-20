#include<stdio.h>
int main()
{
	unsigned long long int P;
	while(1)
	{
		scanf("%llu",&P);
		if(P==-1ll)
		{
			break;
		}
		if(P==0ll)
		{
			printf("%llu\n",P);
		}
		else
		{
		printf("%llu\n",P-1ll);
	    }
	}
	return 0;
}
