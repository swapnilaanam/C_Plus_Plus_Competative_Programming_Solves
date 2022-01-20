#include <stdio.h>
int main()
{
    int i,j,k,t,temp;
    char n[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&n[i]);
    }
    for(j=0;j<t;j++)
    {
    for(i=j+1;i<t;i++)
    {
        if(n[j]>n[i])
        {
            temp=n[j];
            n[j]=n[i];
            n[i]=temp;
        }
    }
    }
    for(i=0;i<t;i++)
    {
        printf("%c ",n[i]);
    }
    return 0;
}
