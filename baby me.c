#include <stdio.h>
int main()
{
    int i,t,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%.1f",(a*0.5)+(b*0.05));
    }
    return 0;
}
