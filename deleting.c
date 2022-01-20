#include <stdio.h>
#include <string.h>
int main()
{
int length,position,c,l;
char string[100],sub1[100],sub2[100];
scanf("%[^\n]",&string);
scanf("%d%d",&position,&length);
position--;
c=0;
while(c<=position-1)
{
    sub1[c]=string[c];
    c++;
}
sub1[c]='\0';
l=strlen(string);
c=0;
while(c<=l-position-length+1)
{
    sub2[c]=string[position+length];
    c++;
    position++;
}
sub2[c]='\0';
strcat(sub1,sub2);
printf("%s",sub1);
return 0;
}
