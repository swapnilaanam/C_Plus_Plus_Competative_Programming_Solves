#include <stdio.h>
int main()
{
	int n,a,b,c,d,e,C=0;
	scanf("%d",&n);
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		if(a==n)
		C++;
		if(b==n)
		C++;
		if(c==n)
		C++;
		if(d==n)
		C++;
		if(e==n)
		C++;
		printf("%d\n",C);
	return 0;
}
	
