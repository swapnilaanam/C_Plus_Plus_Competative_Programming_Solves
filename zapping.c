#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,c,a,b;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a== -1 && b==-1)
        {
            break;
        }
        c=abs(a-b);
        if(c>50)
        {
            c=100-c;
        }
        printf("%d\n",c);
    }
    return 0;
}
