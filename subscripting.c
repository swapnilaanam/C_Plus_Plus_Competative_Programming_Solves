#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[7];
    scanf("%[^\n]s",&s);
    l=strlen(s);
    for(i=4;i<l;i++)
    {
     printf("%c",s[i]);
    }
    return 0;
}
