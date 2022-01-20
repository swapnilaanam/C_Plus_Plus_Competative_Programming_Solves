#include <stdio.h>
int main()
{
    double n,k;
    char c;
    scanf("%lf",&n);
    scanf("%lf",&k);
    scanf("%s",&c);
    if(c=='+')
    {
        printf("%f\n",n+k);
    }
    else if(c=='-')
    {
        printf("%f\n",n-k);
    }
    else if(c=='*')
    {
        printf("%f\n",n*k);
    }
    else if(c=='/')
    {
        printf("%f\n",n/k);
    }
    return 0;
}
