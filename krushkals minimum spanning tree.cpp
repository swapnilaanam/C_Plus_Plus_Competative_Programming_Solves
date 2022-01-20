#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int u,v,w;
    bool operator < (const Edge &P) const
    {
        return w<P.w;
    }
};
vector<Edge>adj;
int pa[100000];
int Find(int u)
{
    return (pa[u]==u ? u:Find(pa[u]));
}
int mst(int n)
{
    int i,c,tc,u,v,w;
    for(i=1;i<=n;i++)
      pa[i]=i;
    sort(adj.begin(),adj.end());
    for(i=0;i<adj.size();i++)
    {
        cout<<adj[i].u<<" "<<adj[i].v<<" "<<adj[i].w<<endl;
    }
    c=0,tc=0;
    for(i=0;i<adj.size();i++)
    {
        u=Find(adj[i].u);
        v=Find(adj[i].v);

    if(u!=v)
    {
        pa[u]=v;
        c++;
        tc+=adj[i].w;
        if(c==n-1)
            break;
    }
    }
     return tc;
}
int main()
{
    int i,u,v,w,n,e;
    cin>>n>>e;
    for(i=1;i<=e;i++)
    {
       Edge input;
       cin>>u>>v>>w;
       input.u=u;
       input.v=v;
       input.w=w;
       adj.push_back(input);
    }
    cout<<"Total Cost: "<<mst(n)<<endl;
}
