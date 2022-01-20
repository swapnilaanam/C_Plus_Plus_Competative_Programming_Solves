# include <stdio.h>
int main()
{
    int i,t,c=0;
    scanf("%d",&t);
    char m[t];
    scanf("%s",m);
    for(i=0;i<t-1;i++)
    {
        if(m[i]==m[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
