#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,temp,l=0,k,k1,k2,k3,position,a,b,c,d,s;
    char str[100],ptr[100],ptr2[100],s1[100],s2[100];
    printf("Enter The String:");
    gets(str);
    k1=strlen(str);
    printf("Enter The First Pattern:");
    gets(ptr);
    k=strlen(ptr);
    printf("Enter The Second Pattern:");
    gets(ptr2);
    k2=strlen(ptr2);
    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==ptr[j])
        {
            temp=i+1;
        while(str[i]==ptr[j] && ptr[j]!='\0')
        {
            i++;
            j++;
        }
        if(k==j)
        {
           position=temp;
           position--;
           l++;
          for(c=0,s=0;c<position,s<position;c++,s++)
          {
           s1[s]=str[c];
          }
          s1[c]='\0';
          strcat(s1,ptr2);
          for(c=position+k2,d=0;c<=k1,d<=k1;c++,d++)
          {
           s2[d]=str[c];
          }
          s2[c]='\0';
          strcat(s1,s2);
          k3=strlen(s1);
          for(a=0,b=0;a<k3,b<k3;a++,b++)
          {
              str[b]=s1[a];
          }
          s1[a]='\0';
        }
        else
        {
            i=temp;
            temp=0;
        }
      }
    }
    if(l==0)
    {
        printf("Pattern Not Found.\n");
    }
    else
    {
        printf("The Replaced String Is:%s\n",s1);
    }
    return 0;
}
