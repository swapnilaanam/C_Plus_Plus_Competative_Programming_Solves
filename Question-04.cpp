#include <stdio.h>
int main()
{
float x,y;
printf("Enter the value of x and y:");
scanf("%f%f",&x,&y);
if(x==0 && y==0)
{
printf("Origin\n");
}
else if(y==0)
{
printf("X Axis\n");
}
else if(x==0)
{
printf("Y Axis\n");
}
else if(x>0 && y>0)
{
printf("1st Quadrant.\n");	
}
else if(x<0 && y>0)
{
printf("2nd Quadrant.\n");	
}
else if(x<0 && y<0)
{
printf("3rd Quardrant.\n");	
}
else if(x>0 && y<0)
{
printf("4th Quardrant.\n");	
}
return 0;
}
