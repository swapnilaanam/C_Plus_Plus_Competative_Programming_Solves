#include<stdio.h>
int main()
{
int N,C=0,i;
float D,B=0;
while(1)
{
scanf("%d",&N);
if(N<0)
{
break;
}
else
B++;
C+=N;
}
printf("%.2f\n",D=C/B);
return 0;
}
