#include <iostream>
#include <algorithm>
using namespace std;
typedef struct event
{
    int s,f;
};
int ats(event in[],int n);
bool cmp(event a,event b);
int main()
{
    int i,n;
    cout<<"Enter How Many Events You Want: ";
    cin>>n;
    event in[n];
    cout<<"Enter Start And Finish Time Of The Events:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>in[i].s>>in[i].f;
    }
    ats(in,n);
    cout<<"****N.B: One Event Counted As 1 Activity. *****"<<endl;
    return 0;
}
int ats(event in[],int n)
{
    int i,j,activity=1;
    sort(in,in+n,cmp);
    cout<<"The Start And Finish Time Of The Events (After Sorting By Finish Time):"<<endl;
    for(i=0;i<n;i++)
        cout<<in[i].s<<" "<<in[i].f<<endl;
    cout<<"Event That Took Place: "<<endl;
    j=0;
    /*As The First Event Will Always Take Place*/
    cout<<in[j].s<<" "<<in[j].f<<endl;
    for(i=1;i<n;i++)
    {
        if(in[j].f <=in[i].s)
        {
            cout<<in[i].s<<" "<<in[i].f<<endl;
            activity ++;
            j=i;
        }
    }
    cout<<"The Maximum Activity Selected(Selection): "<<activity<<endl;
}
bool cmp(event a,event b)
  {
      return b.f>a.f;
  }
