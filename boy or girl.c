#include <stdio.h>
#include <string.h>
int main()
{
    char w[50];
    int i,k,l;
    scanf("%s",&w);
    l=strlen(w);
    for(k=1;k<=l;k++)
    {
        for(i=0;i<l-k;i++)
        {
            if(w[i]>w[i+1])
            {
                temp=w[i];
                w[i]=w[i+1];
                w[i+1]=temp;
            }
        }
    }
    printf("%s",w);
    return 0;
}
    /*if(l%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");
}
