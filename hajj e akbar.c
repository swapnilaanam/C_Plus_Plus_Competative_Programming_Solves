#include <stdio.h>
int main()
{
    int i=1;
    char s[20];
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='*')
        {
            break;
        }
        else if(s[0]=='H')
        {
        printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(s[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
