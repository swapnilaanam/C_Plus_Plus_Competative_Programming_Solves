#include <stdio.h>
int main()
{
	int n,a,b,c,g,i;
	a=b=c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&g);
	if(i%3==0)
	{
		a+=g;
	}
	else if(i%3==1)
	{
		b+=g;
	}
	else if(i%3==2)
	{
		c+=g;
	}
    }
if(a>b && a>c)
{
	printf("Chest\n");
}
else if(b>a && b>c)
{
	printf("Biceps\n");
}
else if(c>a && c>b)
{
	printf("back\n");
}
return 0;
}
