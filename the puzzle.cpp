#include <stdio.h>
int main()
{
	long long int N;
	int r,R=0;
	scanf("%lld",&N);
	while(N)
	{
	r=N%10;
	R=R*10+r;
	N/=10;
    }
    printf("%d",R);
	return 0;
}
