#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i=1;
	char E[80];
	while(scanf("%s",&E)!=EOF)
	{
		if(strcmp(E,"#")==0)
		{
			break;
		}
		else if(strcmp(E,"HELLO")==0)
		{
			printf("Case %d: ENGLISH\n",i);
		}
		else if(strcmp(E,"HOLA")==0)
		{
			printf("Case %d: SPANISH\n",i);
		}
		else if(strcmp(E,"HALLO")==0)
		{
			printf("Case %d: GERMAN\n",i);
		}
		else if(strcmp(E,"BONJOUR")==0)
		{
			printf("Case %d: FRENCH\n",i);
		}
		else if(strcmp(E,"CIAO")==0)
		{
			printf("Case %d: ITALIAN\n",i);
		}
		else if(strcmp(E,"ZDRAVSTVUJTE")==0)
		{
			printf("Case %d: RUSSIAN\n",i);
		}
		else
		{
			printf("Case %d: UNKNOWN\n",i);
		}
		i++;
	}
	return 0;
}
