#include<iostream>
using namespace std;
void hsort(int h[],int n);
void heap(int h[],int n,int i);
int main()
{
    int n,i;
    cout<<"How Many Numbers You Want: ";
    cin>>n;
    int h[n];
    cout<<"Enter The Numbers(With Spaces): ";
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
    hsort(h,n);
    cout<<"Heap Sorted Data Is: ";
    for(i=0;i<n;i++)
    {
        cout<<h[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void hsort(int h[],int n)
{
    int i;
    for(i=(n/2)-1;i>=0;i--)
    {
        heap(h,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        swap(h[0],h[i]);
        heap(h,i,0);
    }
}
void heap(int h[],int n,int i)
{
    int r,lc,rc;
    r=i;
    lc=2*i+1;
    rc=2*i+2;
    if(lc<n && h[lc]>h[r])
        r=lc;
    if(rc<n && h[rc]>h[r])
        r=rc;
    if(r!=i)
    {
        swap(h[i],h[r]);
        heap(h,n,r);
    }
}
