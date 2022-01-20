#include <stdio.h>
int main()
{
    int i,j,t,m,w,sum;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    scanf("%d",&m);
    int c[m];
    sum=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<m;i+=2)
    {
        sum+=c[i];
    }
    printf("%d\n",sum);
    }
    return 0;
}
