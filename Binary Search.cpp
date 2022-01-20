#include <bits/stdc++.h>
using namespace std;
void Bsearch(int B[],int n)
{
    int e,b,m,item;
    cout<<"Enter The Item You Want To Search: ";
    cin>>item;
    b=0;
    e=n-1;
    m=(b+e)/2;
    while(b<=e)
    {
        if(item<B[m])
        {
            e=m-1;
        }
        else if(item==B[m])
        {
            cout<<"The item is found at: "<<m+1<<endl;
            break;
        }
        else
        {
            b=m+1;
        }
        m=(b+e)/2;
    }
    if(b>e)
    {
        cout<<"The Item Is Not Found In The Array."<<endl;
    }
}
int main()
{
    int i,n;
    cout<<"Enter How Many Numbers You Want: ";
    cin>>n;
    int B[n];
    cout<<"Enter The Numbers(With Spaces Between Them): ";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sort(B,B+n);
    Bsearch(B,n);
}
