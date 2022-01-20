#include <stdio.h>
int main()
{
    int i,l=0;
    char str[1000];
    printf("Enter The String:");
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("The Length Of The String Is %d\n",l);
    return 0;
}
