#include<iostream>
using namespace std;
int main()
{
    int i,j,T,N,A,B,K,t;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N>>A>>B>>K;
        t=0;
        for(j=1;j<=N;j++)
        {
            if(j%A==0 && j%B==0)
                continue;
            else if(j%A==0 && j%B!=0)
                t++;
            else if(j%B==0 && j%A!=0)
                t++;
        }
        if(t>=K)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
    return 0;
}
