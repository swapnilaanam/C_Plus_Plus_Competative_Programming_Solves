#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,b=0;
    char d[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&d);
        if(d[0]=='+' || d[1]=='+')
        {
            b++;
        }
        else if(d[0]=='-' || d[1]=='-')
        {
        b--;
    }
    }
    printf("%d\n",b);
}
