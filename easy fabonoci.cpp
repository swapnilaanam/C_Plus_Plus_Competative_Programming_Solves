#include<stdio.h>
int main()
{
int N,a=0,b=1,c,i;
scanf("%d",&N);
for(i=0;i<N-1;i++)
{
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
}
printf("%d\n",a);
return 0;
}
