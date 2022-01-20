#include <cstdio>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define INF 999999
int mat[100][100];
void floyd(int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(mat[i][j]>mat[i][k]+mat[k][j])
                mat[i][j]=mat[i][k]+mat[k][j];
            }
        }
    }
}
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int u,v,w,i,n,e,j;
    scanf("%d %d",&n,&e);
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
     {
         if(i==j) mat[i][j]==0;
         else mat[i][j]=INF;
     }
    }
    for(i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        mat[u][v]=w;
    }

    print(n);
    floyd(n);
    print(n);
}
/*4 6
1 2 3
2 1 8
1 4 7
4 1 2
2 3 2
3 4 1 */

