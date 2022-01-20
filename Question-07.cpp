#include <stdio.h>
 
int main() {
char a;
printf("Enter any character:");
scanf("%c",&a);
if(a>='a' && a<='z' || a>='A' && a<='Z')
{
printf("Alphabet.\n");
}
else if(a>='0' && a<='9')
{
printf("Digit.\n");
}
else
{
printf("Special character.\n");
}
return 0;
}
