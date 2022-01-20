#include <stdio.h>
int main()
{
    int temp,N,K,UP,LB,BEG,END,MID,ITEM,LOC,POS;
    printf("Enter The Element Number:\n");
    scanf("%d",&N);
    int Data[N];
    for(POS=0;POS<N;POS++)
    {
        scanf("%d",&Data[POS]);
    }
    for(K=1;K<=N-1;K++)
    {
        for(POS=0;POS<N-K;POS++)
        {
            if(Data[POS]>Data[POS+1])
            {
                temp=Data[POS];
                Data[POS]=Data[POS+1];
                Data[POS+1]=temp;
            }
        }
    }
    printf("Enter The Item You Want To Search:\n");
    scanf("%d",&ITEM);
    BEG=0;
    END=N-1;
    MID=(BEG+END)/2;
    while(BEG<=END)
    {
     if(ITEM<Data[MID])
     {
         END=MID-1;
     }
     else if(ITEM==Data[MID])
     {
         printf("The Item Is Found At: %d\n",MID+1);
         break;
     }
     else
     {
         BEG=MID+1;
     }
     MID=(BEG+END)/2;
    }
    if(BEG>END)
    {
        printf("The Item Is Not Found In The List.\n");
    }
    return 0;
}
