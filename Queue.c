#include <stdio.h>
int rear=-1;
int front=-1;
int main()
{
    int x,n,limit,a[1000];
    printf("Queue Size: ");
    scanf("%d",&limit);
    printf("1.Input\n2.Delete\n3.Display\n4.Exit\n");
    while(n!=4)
    {
        printf("Choice: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                 printf("Value: ");
        scanf("%d",&x);
            Enqueue(x,limit,a);
            break;
            }
        case 2:
            {
            Dequeue(a);
            break;
            }
        case 3:
            {
                Display(a);
                break;
            }
        case 4:
            {
            printf("\n---------------------------\n");
            break;
            }
        default:
            {
                printf("Wrong Choice.\n");
                break;
            }
        }
    }
    return 0;
}
Enqueue(int x,int limit,int a[])
{
    if(rear==limit-1)
    {
        printf("Overflow.\n");
    }
    else
    {
        if(front==-1)
        {
        front=0;
        }
        front++;
        a[front]=x;
    }
}
Dequeue(int a[])
{
    if(front>rear || front==-1)
    {
        printf("Underflow.\n");
    }
    else
    {
        printf("%d is removed.\n",a[front]);
        front--;
    }
}
Display(int a[])
{
    if(front==-1)
    {
        printf("Queue Is Empty.\n");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
