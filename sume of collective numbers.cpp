#include<stdio.h>
int main()
{
int X,i,C;
while(1)
{
scanf("%d",&X);
if(X==0)
{
break;
}
C=0;
for(i=1;i<=10;i++)
{
if(X%2==0)
{
C+=X;
}
X++;
}
printf("%d\n",C);
}
return 0;
}
