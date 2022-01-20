#include<stdio.h>
int main()
{
double S=0,i,B=0;
for(i=1;i<=100;i++)
{
B=1/i;
S+=B;
}
printf("%2lf\n",S);
return 0;
}
