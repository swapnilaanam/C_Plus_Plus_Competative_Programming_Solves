#include <stdio.h>
int main()
{
    int i,k,t,n[100],d=0;
    scanf("%d%d",&t,&k);
    for(i=0;i<t;i++)
    {
            scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
            if(n[i]>=n[k-1] && n[i]>0)
            {
                d++;
            }
    }
    printf("%d\n",d);
    return 0;
}

