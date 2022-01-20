#include<stdio.h>
int main()
{
	int n,b,c,d;
	scanf("%d",&n);
	for(b=1;b<=n;b++)
    {
    c=b*b;
    d=b*b*b;
	printf("%d %d %d\n",b,c,d);
    }
    return 0;
}
