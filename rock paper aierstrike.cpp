#include <stdio.h>
int main ()
{
	 int i,N;
	 scanf("%d",&N);
	 char A[50],B[50];
	 for(i=0;i<N;i++)
	 {
	 scanf("%s",&A);
	 scanf("%s",&B);
	 if(A[1]=='a' && B[1]=='a')
	 printf("Ambos venceram\n");
	 else if(A[1]=='e' && B[1]=='e')
	 printf("Sem ganhador\n");
	 else if(A[1]=='t' && B[1]=='t')
	 printf("Aniquilacao mutua\n");
     else if((A[1]=='t' && B[1]=='e') || (A[1]=='e' && B[1]=='a') || (A[1]=='t' && B[1]=='a'))
	 printf("Jogador 1 venceu\n");
	 else
	 printf("Jogador 2 venceu\n");
}
	 return 0;
}
