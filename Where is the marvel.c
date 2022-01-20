#include <stdio.h>
int main()
{
    int x=1,i,j,T,K,N,temp,Loc=0,Data[100001],Item[100001];;
    while(1)
    {
    scanf("%d%d",&N,&T);
    if(N==0 && T==0)
    {
        break;
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&Data[i]);
    }
    for(j=0;j<T;j++)
    {
        scanf("%d",&Item[j]);
    }
    for(K=1;K<=N-1;K++)
    {
        for(i=0;i<N-K;i++)
        {
            if(Data[i]>Data[i+1])
            {
                temp=Data[i];
                Data[i]=Data[i+1];
                Data[i+1]=temp;
            }
        }
    }
    printf("CASE# %d:\n",x);
    for(j=0;j<T;j++)
    {
    Loc=0;
    for(i=0;i<N;i++)
    {
        if(Data[i]==Item[j])
        {
         Loc=i+1;
         break;
        }
    }
    if(Loc==0)
    {
       printf("%d not found\n",Item[j]);
    }
    else
    {
        printf("%d found at %d\n",Item[j],Loc);
    }
    }
    x++;
    }
    return 0;
}
