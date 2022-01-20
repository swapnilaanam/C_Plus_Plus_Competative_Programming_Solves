#include <stdio.h>
int main()
{
    int i,j,t,n,c,max;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        max=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&c);
            if(c>max)
            {
                max=c;
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
