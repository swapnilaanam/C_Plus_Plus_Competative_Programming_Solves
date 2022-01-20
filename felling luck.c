#include <stdio.h>
int main()
{
    int i,k,t,n,a,m,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        m=0,j=0;
        for(k=0;k<n;k++)
        {
        scanf("%d",&a);
            m+=((a/30)+1)*10;
            j+=((a/60)+1)*15;

        }
    if(m>j)
    {
        printf("Case %d: Juice %d\n",i,j);
    }
    else if(j>m)
    {
       printf("Case %d: Mile %d\n",i,m);
    }
    else if(m==j)
    {
        printf("Case %d: Mile Juice %d\n",i,m);
    }
    }
    return 0;
}
