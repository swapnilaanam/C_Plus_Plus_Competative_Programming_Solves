#include <iostream>
using namespace std;
int max(int a,int b);
int zoknsk(int W[],int P[],int n,int C);
int main()
{
    int i,n,C;
    cout<<"Enter How Many Items You Want To Take: ";
    cin>>n;
    int W[n],P[n];
    cout<<"Enter The Weight And Price Of The Item:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>W[i]>>P[i];
    }
    cout<<"Enter The Maximum Capacity Of The Box/Bag: ";
    cin>>C;
    cout<<"Maximum Price Of The Items Stored In The Box: "<<zoknsk(W,P,n,C)<<endl;;
}
int zoknsk(int W[],int P[],int n,int C)
{
    int i,j;
    int Z[n+1][C+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=C;j++)
        {
            if(i==0 || j==0)
                Z[i][j]=0;
            else if(W[i-1]<=j)
                Z[i][j]=max(P[i-1]+Z[i-1][j-W[i-1]],Z[i-1][j]);
            else
                Z[i][j]=Z[i-1][j];
        }
    }
    return Z[n][C];
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
