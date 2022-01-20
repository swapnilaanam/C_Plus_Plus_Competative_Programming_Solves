#include <stdio.h>
int main()
{
    int i,n,k,c=0,d=0,e=0;
    scanf("%d%d",&n,&k);
        for(i=1;i<=n;i++)
        {
        c=240-k;
        d+=i*5;
        if(d<=c)
        {
            e++;
        }
        }
        printf("%d\n",e);
        return 0;
}
