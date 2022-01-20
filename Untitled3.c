#include <stdio.h>
int main()
{
    int i,j,t,n;
    /*scanf("%d",&t);
    for(i=1;i<=t;i++)
    {*/
        scanf("%d",&n);
        int c[n];
        for(j=1;j<=n;j++)
        {
            scanf("%d",&c[j]);
        }
        for(i=1,j=1;i<=n,j<=n;j++)
        {
            if(c[i]!=c[j+1])
            {
                printf("%d",c[i]);
            }
            i++;
        }
    //}
    return 0;
}
