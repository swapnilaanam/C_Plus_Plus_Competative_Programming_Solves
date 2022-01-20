#include <stdio.h>
int main()
{
    int i,j,t,n,c,d=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&n);
            if(n==1)
                c++;
        }
        if(c>=2)
            d++;
    }
    printf("%d\n",d);
    return 0;
}
