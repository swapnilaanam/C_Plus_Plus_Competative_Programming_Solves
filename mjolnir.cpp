#include <stdio.h>
int main()
{
	char A[5];
	int i,T,N;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",&A);
		scanf("%d",&N);
	if(A[0]=='T' && A[1]=='h' && A[2]=='o' && A[3]=='r')
	{
		printf("Y\n");
	}	
		else 
		{
			printf("N\n");
		}
	}
	return 0;
}
