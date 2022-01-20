#include <bits/stdc++.h>
#define Infinity 99999;
using namespace std;
int adj[1000][1000];
void print(int n)
{
    int i,j;
     for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<adj[i][j]<<" ";
            }
             cout<<endl;
        }
}
void war(int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(adj[i][j]>adj[i][k]+adj[k][j])
                adj[i][j]=adj[i][k]+adj[k][j];
            }
        }
    }
}
int main()
{
    int i,j,u,v,w,n,e;
    cin>>n>>e;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                adj[i][j]=0;
            else
                adj[i][j]=Infinity;
        }
    }
    for(i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        adj[u][v]=w;
    }
   // print(n);
    war(n);
    print(n);
}
