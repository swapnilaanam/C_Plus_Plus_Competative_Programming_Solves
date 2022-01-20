#include <stdio.h>
int main()
{
float a;
printf("Enter The Height Of A Person In Centimeter:");
scanf("%f",&a);
if(a>=0 && a<150)
{
printf("The Person Is dwarf.\n");
}
else if(a>=150 && a<165)
{
printf("The Person Has A Average Height.\n");
}
else if(a>=165 && a<195)
{
printf("The Person Is Tall.\n");
}
else
{
printf("The Person Has Abnormal Height.\n");
}
return 0;
}
