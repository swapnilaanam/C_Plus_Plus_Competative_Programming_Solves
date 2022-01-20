#include <iostream>
using namespace std;
int max(int a,int b);
int pzokns(int W[],int P[],int n,int C);
int main()
{
    int i,n,W[1000],P[1000],C;
    cout<<"Enter How Many Items You Want: ";
    cin>>n;
    cout<<"Enter The Weight And The Price Of The Items:"<<endl;
    for(i=0;i<n;i++)
    {
    cin>>W[i]>>P[i];
    }
    cout<<"Enter The Maximum Capacity Of The Sorting Box/Bag: ";
    cin>>C;
    pzokns(W,P,n,C);
}
int pzokns(int W[],int P[],int n,int C)
{
    int i,j,result;
    int PZ[n+1][C+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=C;j++)
        {
            if(i==0 || j==0)
                PZ[i][j]=0;
            else if(W[i-1]<=j)
                PZ[i][j]=max(P[i-1]+PZ[i-1][j-W[i-1]],PZ[i-1][j]);
            else
                PZ[i][j]=PZ[i-1][j];
        }
    }
    result=PZ[n][C];
    cout<<"The Maximum Prize Is: "<<result<<endl;
    j=C;
    cout<<"Weight And Price Of The Items Selected:"<<endl;
    for(i=n;i> 0 && result> 0;i--)
    {
        if(result==PZ[i-1][j])
            continue;
        else
        {
            cout<<W[i-1]<<" "<<P[i-1]<<endl;
            result=result-P[i-1];
            j=j-W[i-1];
        }
    }
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
