#include <iostream>
using namespace std;
void mrge(int Ar[],int L,int M,int R);
void msort(int Ar[],int L,int R);
int main()
{
    int i,n;
    cout<<"Enter How Many Numbers You Want: ";
    cin>>n;
    int Ar[n];
    cout<<"Enter Your Numbers(With Spaces Between Them): ";
    for(i=0;i<n;i++)
    {
        cin>>Ar[i];
    }
    msort(Ar,0,n-1);
    cout<<"Your Merge-Sorted Array Is: ";
    for(i=0;i<n;i++)
    {
        cout<<Ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void mrge(int Ar[],int L,int M,int R)
{
    int a1,a2,i,j,k;
    a1=M-L+1;
    a2=R-M;
    int Lf[a1];
    int Rf[a2];
    for(i=0;i<a1;i++)
    {
        Lf[i]=Ar[L+i];
    }
    for(j=0;j<a2;j++)
    {
        Rf[j]=Ar[M+1+j];
    }
    i=0;
    j=0;
    k=L;
    while(i<a1 && j<a2)
    {
        if(Lf[i]<=Rf[j])
        {
            Ar[k]=Lf[i];
            i++;
        }
        else
        {
            Ar[k]=Rf[j];
            j++;
        }
        k++;
    }
    while(i<a1)
    {
        Ar[k]=Lf[i];
        i++;
        k++;
    }
    while (j<a2)
    {
        Ar[k]=Rf[j];
        j++;
        k++;
    }
}
void msort(int Ar[],int L,int R)
{
    if(L<R)
    {
    int M=(L+R)/2;
    msort(Ar,L,M);
    msort(Ar,M+1,R);
    mrge(Ar,L,M,R);
    }
}
