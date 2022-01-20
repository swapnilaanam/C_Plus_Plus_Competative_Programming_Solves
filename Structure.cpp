#include <iostream>
#include <cstdio>
using namespace std;
struct fb
{
    int pass;
    string uname;
};
struct fpass
{
    string mobile;
    struct fb forget;
};
int main()
{
    int n;
    cout<<"-----Welcome To ZumiZumi System-----"<<endl;
    cout<<"Your Choices:- "<<endl;
    cout<<"1.Login.\n2.Forget Password.\n3.Exit"<<endl;
    while(n!=3)
    {
    cout<<"Enter Your Choice: ";
    cin>>n;
    switch(n)
    {
    case 1:
    {
    fb f;
    cout<<"Enter Your Username: ";
    cin>>f.uname;
    cout<<"Enter Your Password: ";
    cin>>f.pass;
    cout<<"-------Congratulation-------"<<endl<<"-------Registered Succesfully!------"<<endl;
    cout<<"Here Are Your Information:-"<<endl;
    cout<<"Username: "<<f.uname<<endl;
    cout<<"Password: "<<f.pass<<endl;
    break;
    }
    case 2:
    {
    fpass fp;
    cout<<"Enter Your Username: ";
    cin>>fp.forget.uname;
    cout<<"Enter Your Mobile Number: ";
    cin>>fp.mobile;
    cout<<"Enter Your Password: ";
    cin>>fp.forget.pass;
    cout<<"Matched.Your Password Sent To Your Phone Number "<<fp.mobile<<endl;
    break;
    }
    case 3:
    {
    cout<<"-------Thank You-------"<<endl;
    cout<<"----From Team ZumiZumi----"<<endl;
    break;
    }
    default:
    {
    cout<<"Invalid Choice"<<endl;
    break;
    }
    }
    }
    return 0;
}

