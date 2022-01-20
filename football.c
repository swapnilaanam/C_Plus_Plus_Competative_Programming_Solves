#include <stdio.h>
#include <string.h>
int main()
{
    int i,t,t1=0,t2=0;
    char team1[1000],team2[1000],x[1000];
    scanf("%d",&t);
    scanf("%*c%s",team1);
    t1=1;
    t--;
    while(t--)
    {
        scanf("%*c%s",x);
        if(strcmp(team1,x)==0)
        {
            t1++;
        }
        else
            {
                strcpy(team2,x);
            t2++;
        }
    }
    if(t1>t2)
    {
        printf("%s\n",team1);
    }
    else if(t2>t1)
        {
        printf("%s\n",team2);
    }
    return 0;
}
