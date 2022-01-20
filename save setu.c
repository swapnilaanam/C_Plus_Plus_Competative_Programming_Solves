#include <stdio.h>
int main()
{
    int i,t,num,count=0;
    char p[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",p);
        if(p[0]=='d')
        {
            scanf("%d",&num);
            count+=num;
        }
        else if(p[0]=='r')
        {
            printf("%d\n",count);
        }
    }
}
