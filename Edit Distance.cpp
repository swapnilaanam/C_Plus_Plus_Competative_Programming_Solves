#include <iostream>
#include <cstring>
using namespace std;
int min(int a,int b,int c);
int edtd(char F[],char S[],int m,int n);
int main()
{
    char F[1000],S[1000];
    int m,n;
    cout<<"Enter The First String: ";
    cin>>F;
    cout<<"Enter The Second String: ";
    cin>>S;
    m=strlen(F);
    n=strlen(S);
    cout<<"The Minimum Edit Distance Needed: "<<edtd(F,S,m,n);
}
int edtd(char F[],char S[],int m,int n)
{
    int i,j;
    int  E[m+1][n+1];
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
                E[i][j]=j;
            else if(j==0)
                E[i][j]=i;
            else if(F[i-1]==S[j-1])
                E[i][j]=E[i-1][j-1];
            else
                E[i][j]=1+min(E[i][j-1],
                              E[i-1][j],
                              E[i-1][j-1]);
        }
    }
    return E[m][n];
}
int min(int x,int y,int z)
    {
    return min(min(x,y),z);
    }
