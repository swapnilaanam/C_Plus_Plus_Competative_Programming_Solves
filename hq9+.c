#include <stdio.h>
#include <string.h>
int main()
{
    int i,c=0,l;
    char w[100];
    scanf("%s",w);
    l=strlen(w);
    for(i=0;i<l;i++)
    {
        if(w[i]=='H' || w[i]=='Q' || w[i]=='9')
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
