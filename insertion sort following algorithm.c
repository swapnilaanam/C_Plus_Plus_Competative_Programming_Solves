#include <stdio.h>
int main()
{
    int t,k,j,temp;
    scanf("%d",&t);
    int n[t];
    for(k=0;k<t;k++)
    {
        scanf("%d",&n[k]);
    }
    for(k=0;k<t;k++)
    {
     j=k;
    while(j>0 && n[j-1]>n[j])
    {
    temp=n[j-1];
    n[j-1]=n[j];
    n[j]=temp;
    j--;
    }
    }
    for(k=0;k<t;k++)
    {
     printf("%d ",n[k]);
    }
    return 0;
}
