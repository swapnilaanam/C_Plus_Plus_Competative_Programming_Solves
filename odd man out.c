#include <stdio.h>
int main()
{
    int i,j,k,l,t,n,d=0;
    /*scanf("%d",&t);
    for(i=1;i<=t;i++)
    {*/
        scanf("%d",&n);
        int c[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[j]);
        }
        for(i=0;i<n;i++)
        {
            for(l=0;l<n;l++)
            {
                if(c[i]==c[l+1])
                {
                    d++;
                }
            }
        }
                if(d==0)
        {
            printf("%d",c[i]);
        }
    return 0;
}
