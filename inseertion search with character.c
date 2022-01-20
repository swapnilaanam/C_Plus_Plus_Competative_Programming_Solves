#include <stdio.h>
int main()
{
    int t,k,j,temp;
    char n[1000];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s",&n[k]);
    }
    for(k=0;k<t;k++)
    {
     j=k;
    while(j>=0 && n[j+1]<n[j])
    {
    temp=n[j+1];
    n[j+1]=n[j];
    n[j]=temp;
    j--;
    }
    }
    for(k=1;k<=t;k++)
    {
     printf("%c ",n[k]);
    }
    return 0;
}
