#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int>stk;
  int n,i,p,c,s;
  cout<<"------Welcome To Stack Application------"<<endl;
  cout<<"Your Choices:-"<<endl;
  cout<<"1.Push\n2.Pop\n3.Display\n4.Top\n5.Exit"<<endl;
  while(n!=5)
  {
  cout<<"Enter Your Choice: ";
  cin>>c;
  switch(c)
  {
  case 1:
    {
  cout<<"Enter How Many Numbers You Want To Push: ";
  cin>>n;
  cout<<"Enter The Number You Want To Push(With Space Between Them): ";
  for(i=0;i<n;i++)
  {
    cin>>p;
    stk.push(p);
  }
  break;
    }
  case 2:
    {
        if(stk.empty())
        {
            cout<<"The Stack Is Empty"<<endl;
            break;
        }
        cout<<"The Popped Number Is:"<<stk.top()<<endl;
        stk.pop();
        break;
    }
  case 3:
      {
  cout<<"The Current Stack Is: ";
  while(!stk.empty())
  {

      cout<<stk.top()<<' ';
      stk.pop();
  }
  cout<<"\n";
  break;
      }
  case 4:
    {
        cout<<"The Stack Top Item Is: "<<stk.top()<<endl;
        break;
    }
  case 5:
    {
        cout<<"------------------------------------------"<<endl;
        cout<<"Thank You For Using My Stack Application."<<endl;
    }
  }
  }
  return 0;
}
