#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    queue<int>que;
    int n,i,p,c;
    cout<<"------Welcome To Queue Application------"<<endl;
    cout<<"Your Choices:-"<<endl;
    cout<<"1.Display\n2.Enqueue\n3.Dequeue\n4.Front\n5.Rear\n6.Exit"<<endl;
    while(n!=6)
    {
        cout<<"Enter Your Choice: ";
        cin>>n;
    switch(n)
    {
    case 1:
        {
            cout<<"The Current Queue Is: ";
            while(!que.empty())
            {
            cout<<que.front()<<" ";
            que.pop();
            }
            cout<<endl;
            break;
        }
    case 2:
        {
            cout<<"How Many Numbers You Want To Enqueue In The Queue: ";
            cin>>n;
            cout<<"Enter All The Elements(With Space Between Them): ";
            for(i=0;i<n;i++)
            {
               cin>>p;
               que.push(p);
            }
            break;
        }
    case 3:
        {
            if(que.empty())
            {
                cout<<"Sorry,The Queue Is Empty."<<endl;
                break;
            }
            cout<<"The Element Popped Is: "<<que.front()<<endl;
            que.pop();
            break;
        }
    case 4:
        {
            cout<<"The Front Element Of The Queue Is: "<<que.front()<<endl;
            break;
        }
    case 5:
        {
           cout<<"The Rear Element Of The Queue Is: "<<que.back()<<endl;
           break;
        }
    case 6:
        {
           cout<<"-------------------------------------"<<endl;
           cout<<"Thank You For Using My Application"<<endl;
        }
    }
    }
    return 0;
}
