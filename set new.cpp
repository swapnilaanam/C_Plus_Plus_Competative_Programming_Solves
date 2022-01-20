#include <bits/stdc++.h>
#define inf 1e15
using namespace std;

list<pair<int,int> >adj[1000010];
//long long dis[1000010],node[1000010];

/*  void printpath(long long int V)
   {
    if(V!=1)
        printpath(node[V]);
    printf("%lld ",V);
   }
   */


void shortestpath(long long int src,long long int V,long long lst)
{
    set<pair<long long int,long long int> >stds;

    long long dis[V],node[V];

    for(long long int i=1;i<=V;i++)
        dis[i]=inf,node[i]=i;

    stds.insert(make_pair(0,src));

    dis[src]=0;

    while(!stds.empty())
    {

        pair<long long int,long long int> tmp=*(stds.begin());
        stds.erase(stds.begin());

        long long int  u=tmp.second;
        list<pair<int,int> >::iterator i;

        for(i=adj[u].begin(); i!=adj[u].end(); i++)
        {
            long long int v=(*i).first;
            long long int w=(*i).second;

            if(dis[u]+w<dis[v])
            {

                if(dis[v]!=inf)
                    stds.erase(stds.find(make_pair(dis[v],v)));

                dis[v]=dis[u]+w;
                stds.insert(make_pair(dis[v],v));
                node[v]=u;

            }
        }
    }

   // if(dis[V]==inf) printf("-1\n");
 //	else printpath(V);

     printf("Vertex   Distance from Source\n");
    for (int i = 1; i <= V; ++i)
       printf("%d \t\t %d\n", i, dis[i]);

   // for(int i=1;i<=V;i++)
        dis[V]={-1};
}

int main()
{
    long long int i,j,t,u,v,w,e,n;

    cin>>t;

    for(j=0;j<t;j++)
    {

    cin>>n;
    cin>>e;

    while(e--)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    long long str,lst;
    cin>>str>>lst;

    shortestpath(str,n,lst);
   /* while(e--)
    {
        adj[i].clear();
    } */
    }
    return 0;
}
