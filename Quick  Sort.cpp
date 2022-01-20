#include <iostream>
#include <cstdio>
using namespace std;
int qsort(int Ar[],int L,int H);
int part(int Ar[],int L,int H);
int main()
{
    int i,n;
    cout<<"How Many Numbers You Want: ";
    cin>>n;
    int Ar[n];
    cout<<"Enter The Numbers(With Space): ";
    for(i=0;i<n;i++)
    {
        cin>>Ar[i];
    }
    qsort(Ar,0,n-1);
    cout<<"The Quick Sorted Array Is: ";
    for(i=0;i<n;i++)
    {
        cout<<Ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int qsort(int Ar[],int L,int H)
{
    int q;
    if(L<H)
    {
        q=part(Ar,L,H);
        qsort(Ar,L,q-1);
        qsort(Ar,q+1,H);
    }
}
int part(int Ar[],int L,int H)
{
    int piv,i,j;
    piv=Ar[H];
    i=L-1;
    for(j=L;j<=H-1;j++)
    {
        if(Ar[j]<=piv)
        {
            i++;
            swap(Ar[i],Ar[j]);
        }
    }
    swap(Ar[i+1],Ar[H]);
    return i+1;
}
