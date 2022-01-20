#include <stdio.h>
#include <string.h>
int main()
{
    int position=0,c,l;
    char string[100],sub[100];
    gets(string);
    gets(sub);
    c=0;
    l=strlen(string);
    while(c<l)
    {
        if(strcmp(string,sub))
        {
            printf("Yes");
        }
        c++;
        l--;
    }
    return 0;
}
