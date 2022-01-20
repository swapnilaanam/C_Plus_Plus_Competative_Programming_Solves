#include <stdio.h>
int main()
{
	float f=0.0;
	int i,N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		f+=2.0;
		f=1.0/f;
	}
	f+=1;
	printf("%.10f",f);
	return 0;
}
