#include <stdio.h>
int main()
{
int a,i,x=0;
for(i=0;i<5;++i)
{
scanf("%d",&a);
if(a%2==0)
{
x++;
}
}
printf("%i valores pares\n",x);
}
