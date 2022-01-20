#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,temp,l=0,k;
    char str[1000],ptr[1000];
    printf("Enter The String:");
    gets(str);
    printf("Enter The Pattern:");
    gets(ptr);
    k=strlen(ptr);
    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==ptr[j])
        {
            temp=i+1;
        while(str[i]==ptr[j] && ptr[j]!='\0')
        {
            i++;
            j++;
        }
        if(k==j)
        {
            printf("%d ",temp);
            l++;
        }
        else
        {
            i=temp;
            temp=0;
        }
     }
    }
    if(l==0)
    {
        printf("The pattern is not found in the string.\n");
    }
    return 0;
}
