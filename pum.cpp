#include<stdio.h>
int main()
{
	int i,a;
	baby(i);
}
int baby(int i)
{
for(i=1;i<=3;i++)
{
printf("%d",i);
}
printf("%d\n");
baby(i);
}
