#include<stdio.h>
int main()
{
	int X,a=0,b=0,c=0;
	while(1)
	{
	scanf("%d",&X);
		if(X==1)
		{
		a++;
		}
		if(X==2)
		{
		b++;
		}
		if(X==3)
		{
		c++;
		}
		if(X==4)
		{
		break;
		}
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
