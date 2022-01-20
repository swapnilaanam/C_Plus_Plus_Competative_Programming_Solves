#include <stdio.h>
int main()
{
float i,j;
int n,m;
for(i=0.0;i<=2.2;i+=.2)
{
for(j=1.0;j<=3.0;j+=1.0)
{
if(i>0.0 && i<1.0)
{
printf("I=%.1f J=%.1f\n",i,j+i);
}
else if(i>1.0 && i<2.0)
{
printf("I=%.1f J=%.1f\n",i,j+i);
}
else
{
n=i;
m=n+j;
printf("I=%d J=%d\n",n,m);
}
}
}
return 0;
}
