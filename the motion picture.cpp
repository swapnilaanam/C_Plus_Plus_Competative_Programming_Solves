#include <stdio.h>
int main()
{
	double a,b,C;
	scanf("%lf %lf",&a,&b);
    C=((b-a)/a)*100;
    printf("%.2lf%%",C);
    return 0;
}
