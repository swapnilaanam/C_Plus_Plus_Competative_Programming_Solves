#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> >adj[2000];


int bellman(int n)
{
    int i,j,c,u,v,w;
    int dis[1100];

    for(i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }

    dis[0]=0;
    for(c=0;c<n-1;c++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<adj[i].size();j++)
            {
                u=i;
                v=adj[i][j].first;
                w=adj[i][j].second;
                if(dis[u]+w<dis[v])
                    dis[v]=dis[u]+w;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<adj[i].size();j++)
        {
            u=i;
            v=adj[i][j].first;
            w=adj[i][j].second;
            if(dis[u]+w<dis[v])
               return -1;
        }
    }

    return 0;

}

int main()
{
    int i,j,t,u,v,w,n,e,ans;
    cin>>t;

    for(j=0;j<t;j++)
    {

        for(i=0;i<2000;i++)
            adj[i].clear();

    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
    }
    ans=bellman(n);
    if(ans==-1)
        cout<<"possible"<<endl;
    else
        cout<<"not possible"<<endl;
    }

    return 0;

}
