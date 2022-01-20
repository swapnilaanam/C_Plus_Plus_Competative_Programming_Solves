#include <stdio.h>
#include <string.h>
int main()
{
    char sub[100],sub2[100];
    printf("Enter The First String:\n");
    gets(sub);
    printf("Enter The Two String:\n");
    gets(sub2);
    strcat(strcat(sub," "),sub2);
    //strcat(sub,sub2);
    printf("%s",sub);
    return 0;
}
