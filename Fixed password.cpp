#include<stdio.h>
int main ()
{
int a,n=2002;
while(1)
{
scanf("%d",&a);
if(a==n)
{
printf("Acesso Permitido\n");
break;
}
else
{
printf("Senha Invalida\n");
}
}
return 0;
}
