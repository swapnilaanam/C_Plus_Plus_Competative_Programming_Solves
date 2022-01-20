#include <stdio.h>
int main()
{
	float L=0.00;
	int i,T;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
    L+=6.00;
    L=1/L;
    }
    L+=3;
printf("%.10f\n",L);
return 0;
}
