#include <stdio.h>
int main()
{
    long int a,b,p=0;
    scanf("%ld%ld",&a,&b);
    if(a<b)
    {
        p=(b*a)/(b-a);
        printf("%ld\n",p);
    }
    else if(b<a)
    {
        p=(a*b)/(a-b);
        printf("%ld\n",p);
    }
    return 0;
}
