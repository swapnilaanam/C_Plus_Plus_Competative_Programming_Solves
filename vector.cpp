#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    vector <int> vc;
    int i,p,n;
    cout<<"Vector Size: "<<vc.size()<<endl;
    cout<<"Enter How Many Output You Need: ";
    cin>>n;
    cout<<"Enter The Numbers You Want(With Space): ";
    for(int i=0;i<n;i++)
    {
        cin>>p;
    vc.push_back(p);
    }
    cout<<"The vector is: ";
    vector<int>::iterator d=vc.begin();
    while  (d!=vc.end())
    {
        cout<<*d<<" ";
        d++;
    }
    cout<<"\nThe vector is: ";
    for(i=0;i<n;i++)
    {
        cout<<vc[i]<<" ";
    }
    cout<<"Vector Size:  "<<vc.size()<<endl;
    cout<<"Vector Capacity: "<<vc.capacity()<<endl;
    cout<<"Vector Max Size: "<<vc.max_size()<<endl;
    cout<<"Vector First Element: "<<vc.front()<<endl;
    cout<<"Vector Last Element: "<<vc.back()<<endl;
    cout<<"Vector 3rd Element: "<<vc.at(3)<<endl;
    vc.resize(3);
    cout<<"Vector Size:  "<<vc.size()<<endl;
    cout<<"\nThe vector is: ";
    vc.clear();
    if(vc.empty()==true)
    {
        cout<<"The Vector Is Empty."<<endl;
    }
    else
    {
        cout<<"The Vector Is Not Empty."<<endl;
    }
    return 0;
}
