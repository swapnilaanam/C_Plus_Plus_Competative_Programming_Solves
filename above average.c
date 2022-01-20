#include <stdio.h>
int main()
{
    int i,j,t,d,c,avg,n[1000],f;
    float ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    c=0;
    f=0;
    scanf("%d",&d);
    for(j=0;j<d;j++)
     scanf("%d",&n[j]);
    for(j=0;j<d;j++)
    c+=n[j];
    avg=c/d;
    for(j=0;j<d;j++)
        if(n[j]>avg)
            f++;
    ans=((float)f/(float)d);
    printf("%.3f%%\n",ans*100);
    }
    return 0;
}
