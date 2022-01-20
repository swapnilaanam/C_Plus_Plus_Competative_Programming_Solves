#include <stdio.h>
int main()
{
	int i,T,a,b,K;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		K=0;
	scanf("%d %d",&a,&b);
	if(a<=b)
	{
		K=b*4+19;
	}
	else 
	{
		K=(2*a-b)*4+19;
    }
	printf("Case %d: %d\n",i,K);	
	}
	return 0;
}
