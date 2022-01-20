#include <stdio.h>
#include <string.h>
int top=-1;
char push();
char pop();
char peek();
char display();
int main()
{
    char str1[1000],stack[1000],n,op1,op2,temp,str;
    int l;

    gets(str1);
    l=strlen(str1);

    for(int i=l-1;i>=0;i--)
    {
        if(str1[i]=='+' || str1[i]=='-' || str1[i]=='/' || str1[i]=='*' || str1[i]=='^')
        {
           op1 = peek(stack);
           pop();
           op2 = peek(stack);
           temp=strcat(strcat(op1,op2),str1[i]);

        }

        else{

            push(temp);

        }

    }


}
char pop()
{
          top--;

}
char peek(char stack[])
{
       return stack[top];
}
