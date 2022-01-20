#include <stdio.h>
 
int main() {
int a;
printf("Enter The Temperature In Centigrade:");
scanf("%d",&a);
if(a<0)
{
printf("Freezing Weather.\n");
}
else if(a>=0 && a<10)
{
printf("Very Cold Weather.\n");
}
else if(a>=10 && a<20)
{
printf("Cold Weather.\n");
}
else if(a>=20 && a<30)
{
printf("Normal Weather.\n");
}
else if(a>=30 && a<40)
{
printf("Hot Weather.\n");
}
else if(a>=10 && a<20)
{
printf("Very Hot Weather.\n");
}
return 0;
}

