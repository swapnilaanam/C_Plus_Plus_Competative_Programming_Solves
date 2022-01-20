#include<stdio.h>
int main()
{
int n=4, c, k, space, count = 1;
space = n;
for ( c = 1 ; c <= n ; c++)
{
for( k = 1 ; k < space ; k++)
printf(" ");
for ( k = 1 ; k <= c ; k++)
{
printf("*");
 if ( c > 1 && count < c)
{
printf(" ");    
count++; 
}      
}     
printf("\n");
space--;
count = 1;
}
return 0;
}
