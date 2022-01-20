#include<stdio.h>
int main()
{
    int position,length,c;
    char string[100],sub[100];
    printf("Enter The String:\n");
    scanf("%[^\n]",&string);
    printf("Enter The Position And Length:\n");
    scanf("%d%d",&position,&length);
    position--;
    c=0;
    while(c<length)
    {
        sub[c]=string[position];
        c++;
        position++;
    }
    sub[c]='\0';
    printf("The Substring is:\n");
    printf("%s\n",sub);
    return 0;
}
