#include <stdio.h>
int main()
{
int i,j,x=0;
for(i=4;i>0;i--)
{
for(j=0;j<i;j++)
{
printf("*");
}
for(j=0;j<x;j++)
{
printf(" ");
}
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
x+=2;
}
return 0;
}
