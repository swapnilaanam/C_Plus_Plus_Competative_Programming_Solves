#include <stdio.h>
#include <string.h>
int main()
{
	char s[7],i;
	gets(s);
	for(i=3;i<7;i++)
	{
		printf("%s",s[i]);
	}
	return 0;
}
