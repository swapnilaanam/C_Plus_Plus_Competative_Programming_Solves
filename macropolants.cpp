#include <stdio.h>
int main()
{
	int i,T,N,M;
	float C=0.00;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&N,&M);
		if(N==1001)
		{
			C+=1.50*M;
		}
		else if(N==1002)
		{
			C+=2.50*M;
		}
		else if(N==1003)
		{
			C+=3.50*M;
		}
		else if(N==1004)
		{
			C+=4.50*M;
		}
		else if(N==1005)
		{
			C+=5.50*M;
		}
	}
	printf(".2%f\n",C);
	return 0;
}
