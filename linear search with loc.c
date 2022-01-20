#include <stdio.h>
int main()
{
    int i,n,item,loc;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item ==a[i])
        {
        printf("The Item Found At %d\n",i+1);
        break;
        }
    }
    if(i==n)
    {
        printf("The Item Is Not Found.\n");
    }
        return 0;
}
