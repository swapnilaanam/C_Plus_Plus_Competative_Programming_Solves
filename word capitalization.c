#include <stdio.h>
#include <string.h>
int main()
{
    int i;
   char w[1000];
   gets(w);
   printf("%c",toupper(w[0]));
   for(i=1;w[i]!='\0';i++)
   {
       printf("%c",w[i]);
   }
    return 0;
}
