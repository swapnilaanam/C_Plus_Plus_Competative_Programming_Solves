#include <stdio.h>
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
 int n,value,stack[1000],limit;
 printf("Stack Size: ");
 scanf("%d",&limit);
 printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
 while(n!=5)
 {
     printf("Choice: ");
     scanf("%d",&n);
     switch(n)
     {
 case 1:
     {
    printf("Value: ");
    scanf("%d",&value);
    push(value,stack,limit);
    break;
     }
 case 2:
     {
    pop(stack);
    break;
     }
 case 3:
     {
    peek(stack);
    break;
     }
 case 4:
     {
    display(stack);
    break;
     }
 case 5:
     {
    printf("----------------------------\n");
    break;
     }
 default:
     {
    printf("Invalid Choice.\n");
     }
    }
 }
    return 0;
}
void push(int value,int stack[],int limit)
{
    if(top>=limit-1)
    {
        printf("Overflow.\n");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
void pop(int stack[])
{
     if(top<0)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("%d is popped\n",stack[top]);
        top--;
    }
}
void peek(int stack[])
{
   if(top<0)
   {
       printf("Underflow.\n");
   }
   else
   {
       printf("%d\n",stack[top]);
   }
}
void display(int stack[])
{
    int i;
    if(top<0)
   {
       printf("Underflow.\n");
   }
   else
   {
       for(i=top;i>=0;i--)
       {
           printf("%d\n",stack[i]);
       }
   }
}
void oprator()
{
    if()
}
