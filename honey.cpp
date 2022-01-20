#include <stdio.h>
int main()
{
	double V,D,H,A,R;
	while(scanf("%lf %lf",&V,&D)!=EOF)
	{
		R=D/2;
		A=3.1416*R*R;
		H=V/A;
		printf("ALTURA = %.2lf\n",H);
	printf("AREA = %.2lf\n",A);
	}
	return 0;
}
