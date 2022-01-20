#include <stdio.h>
#include <string.h>
int main()
{
    int position,i,j,s,l;
    char string[100],str1[100],sub[100],sub2[100];
    printf("Enter The String:\n");
    gets(string);
    printf("Enter The Text To Insert:\n");
    gets(sub);
    printf("Enter The Place You Want To Insert:\n");
    scanf("%d",&position);
    l=strlen(string);
    for(i=0,s=0;i<position,s<position;i++,s++)
    {
        str1[s]=string[i];
    }
    str1[i]='\0';
    strcat(str1,sub);
    for(i=position,j=0;i<=l,j<=l;i++,j++)
    {
        sub2[j]=string[i];
    }
    strcat(str1,sub2);
    printf("%s",str1);
    return 0;
}
