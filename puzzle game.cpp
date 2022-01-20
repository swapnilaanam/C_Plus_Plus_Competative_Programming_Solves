#include <bits/stdc++.h>
using namespace std;
int i,j,k;
char pz[3][3]=
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

bool isvalid(char mark)
{
    return mark>='1' && mark<='9';
}

bool isvisited(char mark)
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         {
             if(pz[i][j]==mark)
                return false;
         }
    }
    return true;
}

bool markposition(char mark,char n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         {
             if(pz[i][j]==mark)
                pz[i][j]=n;
         }
    }
}

void printbox()
{
    for(i=0;i<3;i++)
    {
        cout<<" ___ ___ ___"<<endl;
        cout<<"|   |   |   |"<<endl;
        cout<<"| "<<pz[i][0]<<" | "<< pz[i][1]<<" | "<<pz[i][2]<<" | "<<endl;
        cout<<"|___|___|___|"<<endl;
    }
}

bool winner(char mark)
{
    if((pz[0][0]==mark && pz[1][1]==mark && pz[2][2]==mark) || (pz[0][2]==mark && pz[1][1]==mark && pz[2][0]==mark))
        return true;
    else if((pz[0][0]==mark && pz[0][1]==mark && pz[0][2]==mark) || (pz[1][0]==mark && pz[1][1]==mark && pz[1][2]==mark) ||
             (pz[2][0]==mark && pz[2][1]==mark && pz[2][2]==mark))
        return true;
    else if((pz[0][0]==mark && pz[1][0]==mark && pz[2][0]==mark) || (pz[0][1]==mark && pz[1][1]==mark && pz[2][1]==mark) ||
             (pz[0][2]==mark && pz[1][2]==mark && pz[2][2]==mark))
        return true;
    else
        return false;
}

int main()
{
    char pla1,pla2;
    cout<<"Game Starting...Please Wait..."<<endl;
    printbox();
    cout<<"Game Started...Play..."<<endl;
    cout<<"Select Marker For Player A: ";
    cin>>pla1;
    cout<<"Select Marker For Player B: ";
    cin>>pla2;
    bool primaryplayer=true;
    char mark;
    int cnt=0;
    k=0;
    while(cnt<9)
    {
        if(primaryplayer)
        {
            cout<<"Player A,it's your turn:";
            cin>>mark;
            bool valid=isvalid(mark) && !isvisited(mark);
            if(valid)
            {
                markposition(mark,pla1);
                printbox();
                primaryplayer=false;
                if(winner(pla1))
                {
                    cout<<"Winner Winner Chicken Katakuti Dinner!!! Player B Won..."<<endl;
                    k=1;
                    break;
                }
                cnt++;
            }
            else
            {
                cout<<"Invalid Choice, Try again"<<endl;
            }
        }
        else
        {
            cout<<"Player B,it's your turn:";
            cin>>mark;
            bool valid=isvalid(mark) && !isvisited(mark);
            if(valid)
            {
                markposition(mark,pla2);
                printbox();
                primaryplayer=true;
                if(winner(pla2))
                {
                    cout<<"Winner Winner Chicken Katakuti Dinner!!! Player B Won..."<<endl;
                    k=1;
                    break;
                }
                cnt++;
            }
            else
            {
                cout<<"Invalid Choice, Try again"<<endl;
            }
        }
    }
    if(k==0)
        cout<<"No katakuti Today :-/ , Match Drawn"<<endl;
}
