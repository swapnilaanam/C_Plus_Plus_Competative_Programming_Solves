#include <bits/stdc++.h>
#define inf 9999999

using namespace std;

int cost[1000][1000];

int parent[1000];

int find(int i)
{
    while(parent[i]!=i)
        i=parent[i];
    return i;
}

void union1(int i,int j)
{
    int a,b;

    a=find(i);
    b=find(j);
    parent[a]=b;
}

void krs(int V)
{

    int i,j,cnt=0,c=0,min,a,b;

    for(i=0;i<V;i++)
            parent[i]=i;

    while(cnt<V-1)

    {

      min=INT_MAX,a=-1,b=-1;

      for(i=0;i<V;i++)
      {
          for(j=0;j<V;j++)
          {

              if(find(i)!=find(j) && cost[i][j]<min)
              {
                  a=i;
                  b=j;
                  min=cost[i][j];
              }

          }
      }

      union1(a,b);

      cout<<"Edge "<<cnt<<": "<<a<<"---"<<b<<": "<<min<<endl;

      c+=min;
      cnt ++;

    }
    cout<<"Minimum Cost: "<<c<<endl;
}

int main()
{

    int i,j,n,e,u,v,w;
    cin>>n>>e;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cost[i][j]=inf;
        }
    }

    for(i=0;i<e;i++)
    {

        cin>>u>>v>>w;

        cost[u][v]=w;
        cost[v][u]=w;

    }

   krs(n);

}
