#include <stdio.h>
#include <string.h>
int main()
{
	int K=0;
	char S[600];
	gets(S);
	K=strlen(S);
	if(K<=140)
	{
	printf("TWEET\n");
    }
	else
	{
		printf("MUTE\n");
	}
	return 0;
}
