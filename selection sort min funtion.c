#include <stdio.h>
int main()
{
    int i,j,k,t,temp,n[100],min,pos;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<t;j++)
    {
        min=n[j];
        pos=j;
    for(i=j+1;i<t;i++)
    {
        if(n[i]<min)
        {
            min=n[i];

            pos=i;
        }
    }
        if(pos!=j)
        {
            temp=n[pos];
             n[pos]=n[j];
            n[j]=temp;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
    }
