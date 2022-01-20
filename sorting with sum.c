#include<stdio.h>
#include<stdio.h>
int main()
{
    int l,i,j,temp;
    char n[100];
    scanf("%s",n);
    l=strlen(n);
    for(i=1;i<=l;i+=2)
    {
        for(j=0;j<l-i;j+=2)
        {
        if(n[j]>n[j+2])
        {
            temp=n[j];
            n[j]=n[j+2];
            n[j+2]=temp;
        }
        }
    }
    printf("%s",n);
    return 0;
}
