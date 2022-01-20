#include <stdio.h>
int main()
{
int i,N,M,K=0,X,Y;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d%d",&X,&Y);
if(X>Y)
{
for(M=Y+1;M<X;M++)
{
if(M%2==1)
{
K+=1;	
}
}
printf("%d\n",K);
}
else if(X<Y)
{
for(M=X+1;M<Y;M++);
{
if(M%2==1);
{
K+=1;
}
printf("%d\n",K);
}
K=0;
}
}
return 0;
}
