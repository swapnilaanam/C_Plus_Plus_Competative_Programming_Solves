#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int mcm(int D[],int n);
int main()
{
    int i,n;
    cout<<"Enter The Dimension Number: ";
    cin>>n;
    int D[n];
    for(i=0;i<n;i++)
    {
        cin>>D[i];
    }
    cout<<mcm(D,n)<<endl;
}
int mcm(int D[],int n)
{
    int i,j,l,k,mi;
    int m[n][n];
    int b[n][n];
    for(i=1;i<n;i++)
    {
        m[i][i]=0;
        b[i][i]=0;
    }
    for(l=2;l<n;l++)
    {
      for(i=1;i<n-l+1;i++)
       {
         j=i+l-1;
         m[i][j]=INT_MAX;
        for(k=i;k<=j-1;k++)
         {
          mi=m[i][k]+m[k+1][j]+(D[i-1]*D[k]*D[j]);
          if(mi<m[i][j])
          {
              m[i][j]=mi;
              b[i][j]=k;
          }
         }
        }
    }
    cout<<b[1][n-1]<<endl;
    return m[1][n-1];
}
