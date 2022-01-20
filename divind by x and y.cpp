#include<stdio.h>
int main ()
{
int i,a,n,x,y;
float m;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d %d",&x,&y);
if(y!=0)
{
m=(float)x/y;
printf("%.1f\n",m);
}
else
{
printf("divisao impossivel\n");
}
}
return 0;
}
