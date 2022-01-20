#include <iostream>
#include <cstdio>
using namespace std;
int max(int a,int b);
int lcsq(char F[],char S[],int m,int n);
int main()
{
    int i,j,m,n,l;
    cout<<"Enter The Length Of The First String: ";
    cin>>m;
    char F[m];
    cout<<"Enter The Length Of The Second String: ";
    cin>>n;
    char S[m];
    cout<<"Enter The First String: ";
    for(i=0;i<m;i++)
    {
        cin>>F[i];
    }
    cout<<"Enter The Second String: ";
    for(j=0;j<n;j++)
    {
        cin>>S[j];
    }
    printf("Length of LCS is %d", lcsq( F, S, m, n ) );
}
int lcsq(char F[],char S[],int m,int n)
{
    int i,j;
    int Lcs[m+1][n+1];
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0 )
            {
                Lcs[i][j]=0;
            }
            else if(F[i-1]==S[j-1])
            {
                Lcs[i][j]=Lcs[i-1][j-1]+1;
            }
            else
            {
                Lcs[i][j]=max(Lcs[i-1][j],Lcs[i][j-1]);
            }
        }
    }
        return Lcs[m][n];
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
