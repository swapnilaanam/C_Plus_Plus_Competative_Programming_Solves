#include <stdio.h>
int main()
{
	long long int N;
	int r,R=0;
	while(scanf("%lld",&N)!=EOF)
	{
	while(N)
	{
	r=N%10;
	N/=10;
	printf("%d",r);
    }
    printf("\n");
    }
    return 0;
}
