#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
typedef struct itm
{
    int pr,we;
    double pw;
};
double knp (itm fa[],int n,int l);
bool cmp(itm a,itm b)
{
    return a.pw> b.pw;
}
int main()
{
    int n,i,l,b;
    cout<<"How Many Item You Want: ";
    cin>>n;
    itm fa[n];
    cout<<"Enter The Limit Of Weight: ";
    cin>>l;
    cout<<"Enter The Price And Weight Of The Items(One By One):"<<endl;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&fa[i].pr,&fa[i].we);
    }
    for(i=0;i<n;i++)
    {
        fa[i].pw=fa[i].pr/fa[i].we;
    }
    knp(fa,n,l);
    return 0;
}
double knp(itm fa[],int n,int l)
{
    int i;
    sort(fa,fa+n,cmp);
    cout<<"The Sorted Price And Weight Of The Items Are: "<<endl;
    for(i=0;i<n;i++)
    {
        printf("%d %d",fa[i].pr,fa[i].we);
        cout<<endl;
    }
    double price=0.0;
    for(i=0;i<n;i++)
    {
        if(fa[i].we<=l)
        {
            l-=fa[i].we;
            price+=(fa[i].pr)*(1.0);
        }
        else
        {
            price+=((fa[i].pw)*l);
            l=0;
        }
        if(l==0)
        break;
    }
    printf("The Highest Price: %.2lf",price);
}
