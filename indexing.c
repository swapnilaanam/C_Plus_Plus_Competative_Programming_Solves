#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],sub[100];
    int i,j,l1,l2,k=0;
    printf("Enter The String:\n");
    gets(str);
    printf("Enter The Index String:\n");
    gets(sub);
    l1=strlen(str);
    l2=strlen(sub);
    for(i=0,j=0;str[i]!='\0' && sub[j]!='\0';i++)
    {
        if(str[i]==sub[j])
            j++;
            else
            j=0;
    }
    if(j==l2)
    {
        k=i-j+1;
    }
    else
        k=0;
    printf("%d\n",k);
    return 0;
}
