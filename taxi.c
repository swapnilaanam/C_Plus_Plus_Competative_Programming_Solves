#include <stdio.h>
int main()
{

    int a,b,i,s=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
      scanf("%d",&b);
      s+=b;
    }
    if(s%4==0)
    {
        printf("%d",s/4);
    }
    else if(s%4!=0)
    {
        printf("%d",(s+1)/4);
    }
    return 0;
}
