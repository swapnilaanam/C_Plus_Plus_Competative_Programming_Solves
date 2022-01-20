#include <stdio.h>
int main()
{
    int i,t,a,b,m,n;
    while(1)
    {
    scanf("%d",&t);
    if(t==0)
    {
        break;
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<t;i++)
    {
       scanf("%d%d",&m,&n);
            if(m==a || n==b )
            {
                printf("divisa\n");
            }
            else if(m>a && n>b)
            {
                 printf("NE\n");
            }
            else if (m<a && n>b)
            {
                 printf("NO\n");
            }
            else if(m<a && n<b)
            {
                printf("S0\n");
            }
            else
            {
                 printf("SE\n");
            }
    }
    }
    return 0;
}
