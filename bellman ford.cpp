#include <iostream>
using namespace std;
#define INFINITY 99999
typedef struct edge
{
    int u,v,w;
};
void bmf(edge in[],int v,int e,int str);
void disp(int arr[],int v);
int main()
{
    int i,v,e,str;
    edge in[1000];
    cout<<"Enter the number vertices and edges of the graph: ";
    cin>>v>>e;
    cout<<"Enter The Connected Edges And Their Weights: "<<endl;
    for(i=0;i<e;i++)
    {
        cin>>in[i].u>>in[i].v>>in[i].w;
    }
    cout<<"Enter The Starting Vertice: ";
    cin>>str;
    bmf(in,v,e,str);
    return 0;
}
void bmf(edge in[],int v,int e,int str)
{
    int i,j,w,u,ve,dis[v],p[v];
    for(i=0;i<v;i++)
        dis[i]=INFINITY;
    dis[str]=0;
    for(i=0;i<v-1;i++)
    {
        for(j=0;j<e;j++)
        {
         u=in[j].u;
         ve=in[j].v;
         w=in[j].w;
         if(dis[u]!=INFINITY && dis[ve]>dis[u]+w)
         {
             dis[ve]=dis[u]+w;
         }
        }
    }
    for(i=0;i<e;i++)
    {
        u=in[i].u;
        ve=in[i].v;
        w=in[i].w;
        if(dis[u]!=INFINITY && dis[ve]>dis[u]+w){
            cout<<"Negative Cycle Detected"<<endl;
            return;
           }
    }
    cout<<"Shortest Path Cost:"<<endl;
    disp(dis,v);
}
void disp(int arr[],int v)
{
  int i;
  for(i=0;i<v;i++)
  {
      cout<<i<<": "<<arr[i]<<endl;
  }
  cout<<endl;
}
