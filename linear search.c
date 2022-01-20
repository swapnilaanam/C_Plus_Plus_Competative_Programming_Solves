#include <stdio.h>
int main()
{
    int i,N,Item,Loc=0;
    printf("Enter The Element Number:\n");
    scanf("%d",&N);
    int Data[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Data[i]);
    }
    printf("Enter The Item:\n");
    scanf("%d",&Item);
    for(i=0;i<N;i++)
    {
        if(Data[i]==Item)
        {
         printf("The Location Of The Item Is :%d\n",i+1);
         Loc++;
        }
    }
    if(Loc==0)
    {
       printf("The Item Is Not Found");
    }
    return 0;
}

