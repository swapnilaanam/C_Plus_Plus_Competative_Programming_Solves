#include <stdio.h>
int main()
{
    int N,P,K,temp;
    scanf("%d",&N);
    int Data[N];
    for(P=0;P<N;P++)
    {
        scanf("%d",&Data[P]);
    }
    for(K=1;K<=N-1;K++)
    {
        for(P=0;P<N-K;P++)
        {
            if(Data[P]>Data[P+1])
            {
                temp=Data[P];
                Data[P]=Data[P+1];
                Data[P+1]=temp;
            }
        }
    }
    for(P=0;P<N;P++)
    {
        printf("%d ",Data[P]);
    }
    return 0;
}
