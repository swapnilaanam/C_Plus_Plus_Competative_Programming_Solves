#include <stdio.h>
int main()
{
int a,i,x=0,y=0,z=0,k=0;
for(i=0;i<5;++i)
{
scanf("%d",&a);
if(a%2==0)
{
x++;
}
if(a%2!=0)
{
y++;
}
if(a>0)
{
z++;
}
if(a<0)
{
k++;
}
}
printf("%i valor(es) par(es)\n",x);
printf("%i valor(es) impar(es)\n",y);
printf("%i valor(es) positivo(s)\n",z);
printf("%i valor(es) negativo(s)\n",k);
return 0;
}
