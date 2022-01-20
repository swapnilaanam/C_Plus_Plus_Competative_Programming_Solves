#include <stdio.h>
#include <strings.h>
int main()
{
	char A[100],B[100];
	scanf("%s %s",&A,&B);
	A==strlwr(A);
	B==strlwr(B);
	strcmp(A,B);
	if(strcmp(A,B)==0)
	{
		printf("0");
	}
	else if(strcmp(A,B)>0)
	{
		printf("1");
	}
	else if(strcmp(A,B)<0)
	{
		printf("-1");
	}
	return 0;
}
