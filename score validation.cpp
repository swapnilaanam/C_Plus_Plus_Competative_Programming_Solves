#include<stdio.h>
int main ()
{
float sum=0,x,y;
while(y<2)
{
scanf("%f",&x);
if(x>=0 && x<=10)
{
y++;
sum+=x;
}
else
{
printf("nota invalida\n");
}
}
printf("media = %.2f",sum/2);
return 0;
}
