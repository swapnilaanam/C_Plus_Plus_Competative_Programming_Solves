#include <stdio.h>
int main()
{
int t,h,w,l,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d%d%d",&h,&w,&l);
    if(h<=20 && w<=20 && l<=20 )
    {
        printf("Case %d: good\n",i);
    }
        else
        {
        printf("Case %d: bad\n",i);
        }
}
    return 0;
}
