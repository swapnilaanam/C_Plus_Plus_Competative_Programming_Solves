#include <stdio.h>
 
int main() {
double a;
int i,x=0;
float j=0;
for(i=0;i<6;++i)
{
scanf("%lf",&a);
if(a>0)
{
x++;
j=j+a;
}
}
printf("%i valores positivos\n",x);
printf("%.1f",j/x);
return 0;
} 
