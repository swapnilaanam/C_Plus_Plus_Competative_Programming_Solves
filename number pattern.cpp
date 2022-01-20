#include <stdio.h>
int main()
{
int i,j,x=1,y;
y=5-1;
for(i=1;i<=5;i++)
{
x=i;
for(j=1;j<=y;j++)
{
printf(" ");
}
y--;
for(j=1;j<=i;j++)
{
printf("%d",x);
x++;
}
x--;
x--;
for(j=1;j<i;j++)
{
printf("%d",x);
x--;
}
printf("\n");
}
return 0;
}
