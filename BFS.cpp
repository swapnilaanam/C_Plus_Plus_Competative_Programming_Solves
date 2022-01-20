#include <bits/stdc++.h>

using namespace std;

vector<bool> vis;

vector<int> adj[5000];

void bfs(int str,int fin,int n)

{
    int node,i,v,u;

    queue<int>q;

    q.push(str);
    vis[str]=true;

    while(!q.empty())
    {
        node=q.front();
        q.pop();

        cout<<node<<" ";

     /*   if(node==fin)
        {
            break;
        }
         */
        for(i=0;i<adj[node].size();i++)
        {
            v=adj[node][i];
            if(!vis[v])
            {
                q.push(v);
                vis[v]=true;
            }
        }
    }
}


int main()
{
    int i,j,n,e,u,v,w,str,fin;

    cin>>n>>e;

    vis.assign(n,false);

    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin>>str>>fin;

    bfs(str,fin,n);
}
