#include<stdio.h>
int main()
{
double S=0,i,B=0,j=1;
for(i=1;i<=39;i+=2)
{
B=i/j;
j*=2;
S+=B;
}
printf("%.2lf\n",S);
return 0;
}
