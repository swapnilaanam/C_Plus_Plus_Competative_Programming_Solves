#include <stdio.h>
#include <string.h>
int main()
{
	int K;
	char L[600];
	gets(L);
	K=strlen(L);
	if(K<=80)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	return 0;
}

