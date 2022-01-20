#include <stdio.h>
int main()
{
    int i,j,t,d,n[100],max,min,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&d);
        for(j=0;j<d;j++)
        {
            scanf("%d",&n[j]);
        }
        max=n[0];
        min=n[0];
        for(j=0;j<d;j++)
        {
            if(n[j]>max)
            {
                max=n[j];
            }
            if(n[j]<min)
            {
                min=n[j];
            }
        }
        ans=(max-min)*2;
        printf("%d\n",ans);
    }
    return 0;
}
