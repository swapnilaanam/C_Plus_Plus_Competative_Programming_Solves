#include <stdio.h>
#include <string.h>
int main()
{
	int j,i,T,K;
	float C;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	char S[10100];
	scanf("%s",S);
	C=0;
	K=strlen(S);
    for(j=0;j<K;j++)
    {
    	C+=0.01;
	}
	printf("%.2f\n",C);
    }
return 0;
}
