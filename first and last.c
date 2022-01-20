#include <stdio.h>

int main()
{
    int i,t,n,s,f,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        s=0;
    scanf("%d",&n);
    l=n%10;
    f=n;
    while(n>=10)
    {
        n=n/10;
    }
    f=n;
    s=f+l;
    printf("%d\n",s);
    }
    return 0;
}
