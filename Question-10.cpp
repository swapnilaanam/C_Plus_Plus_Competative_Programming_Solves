#include <stdio.h>
 
int main() {
int a;
printf("Enter The Number Of The Month:");
scanf("%d",&a);
if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
{
printf("31 Days For This Month.\n");
}
if(a==2)
{
printf("28 Days For This Month.\n29 Days For This Month If It Is A Leap Year.\n");
}
if(a==4 || a==6 || a==9 || a==11)
{
printf("30 Days For This Month.\n");
}
return 0;
}
