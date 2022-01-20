#include <stdio.h>
#define size 5
int A[size];
int top=-1;
int main()
{
    int v,i,limit;
    printf("Enter The Number Of Elements You Want To Push:\n");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
    scanf("%d",&v);
    push(A,v);
    displaystack(i);
    }
}
void push(int A[],int v)
{
    if(top==size-1)
        printf("The stack is full\n");
    else
        top++;
    A[top]=v;
}
void displaystack(int i)
{
    if(top==-1)
    {
        printf("The Stack Is Empty\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",A[i]);
        }
    }
}
