#include <iostream>
#include <string.h>
using namespace std;
int plcsq(char str1[],char str2[],int s1,int s2);
int max(int a,int b);
int main()
{
    int s1,s2;
    char str1[1000],str2[1000];
    cout<<"Enter The First String: ";
    cin>>str1;
    cout<<"Enter The Second String: ";
    cin>>str2;
    s1=strlen(str1);
    s2=strlen(str2);
    plcsq(str1,str2,s1,s2);
}
int plcsq(char str1[],char str2[],int s1,int s2)
{
    int i,j;
    int p[s1+1][s2+1];
    for(i=0;i<=s1;i++)
    {
        for(j=0;j<=s2;j++)
        {
            if(i==0 || j==0)
                p[i][j]=0;
            else if(str1[i-1]==str2[j-1])
                p[i][j]=p[i-1][j-1]+1;
            else
                p[i][j]=max(p[i-1][j],p[i][j-1]);
        }
    }
    cout<<"Length Of The Longest Common Subsequence Is: "<<p[s1][s2]<<endl;
    int index=p[s1][s2];
    char plcs[index+1];
    plcs[index]='\0';
     i=s1;
     j=s2;
    while (i>0 && j>0)
    {
        if(str1[i-1]==str2[j-1])
        {
            plcs[index-1]=str2[j-1];
            i--;j--;index--;
        }
        else if(p[i-1][j]>p[i][j-1])
        i--;
        else
        j--;
    }
    cout<<"The Longest Common Subsequence Is: "<<plcs<<endl;
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
