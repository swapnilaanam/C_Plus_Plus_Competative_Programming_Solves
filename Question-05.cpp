#include <stdio.h>
#include <math.h>
 
int main() {
float A,B,C,d,r1,r2,real_part,imaginary_part;
printf("Enter The Value Of A And B And C:");
scanf("%f%f%f",&A,&B,&C);
d=(pow(B,2)-(4*A*C));

if(d>0)
{
r1=(-B+sqrt(d))/(2*A);
r2=(-B-sqrt(d))/(2*A);
printf("R1 = %.2f\nR2 = %.2f\n",r1,r2);
}
else if(d==0)
{
r1=r2=-B/(2*A);
printf("R1 = %.2f\nR2 = %.2f\n",r1,r2);
}
else
{
real_part=-B/(2*A);
imaginary_part=sqrt(-d)/(2*A);
printf("R1 = %.2f+%.2f\nR2 = %.2f+%.2f\n",real_part,imaginary_part,real_part,imaginary_part);
}
return 0;
}
