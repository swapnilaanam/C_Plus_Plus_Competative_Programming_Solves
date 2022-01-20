#include <stdio.h>
int main() {
int i=1,j=60,n;
printf("%d %d\n",i,j);
for(n=1;n<=12;n++)
{
i+=3;
j-=5;
printf("%d %d\n",i,j);
}
return 0;
}
