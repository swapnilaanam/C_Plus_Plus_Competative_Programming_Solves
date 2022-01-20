#include <stdio.h>
int main()
 {
    int a,b,d,s,m;
    scanf("%d%d",&a,&b);
    if(a>b) {
        d=b;
        m=a-b;
        s=m/2;
    }
    else {
        d=a;
        m=b-a;
        s=m/2;
    }
    printf("%d %d\n",d,s);
    return 0;
}
