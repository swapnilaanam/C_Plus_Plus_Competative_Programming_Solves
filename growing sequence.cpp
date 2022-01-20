#include<stdio.h>
int main()
{
	int X,b;
	while(1)
	{
	scanf("%d",&X);
	for(b=1;b<X;b++)
    {
	printf("%d ",b);
	}
    if(X==0)
    {
    	break;
	}
	printf("%d\n",b);
}
    return 0;
 }
