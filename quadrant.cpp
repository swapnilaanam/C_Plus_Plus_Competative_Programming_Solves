#include<stdio.h>
int main ()
{
int a,i,j;
while(1)
{
scanf("%d %d",&i,&j);
if(i==0 || j==0)
{
break;
}
else if(i>0 && j>0)
{
printf("primeiro\n");
}
else if(i>0 && j<0)
{
printf("quarto\n");
}
else if(i<0 && j<0)
{
printf("terceiro\n");
}
else if(i<0 && j>0)
{
printf("segundo\n");
}
}
return 0;
}
