#include <stdio.h>
int main()
{
int age;
printf("Enter The Age Of The Candidate:");
scanf("%d",&age);
if(age>=18)
{
printf("Candidate Is Eligible For Casting His/Her Own Vote.\n");
}
else
{
printf("Candidate Is Not Eligible For Casting His/Her Own Vote.\n");
}
return 0;
}
