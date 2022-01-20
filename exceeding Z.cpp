#include<stdio.h>
int main()
{
	int a,X,b=0,Z,r=0;
	scanf("%d",&X);
	while(Z<=X)
	{
		scanf("%d",&Z);
		for(a=X;b<Z;a++)
		{
		b+=a;
		r++;
}
} 
	printf("%d\n",r);
	return 0;
}
