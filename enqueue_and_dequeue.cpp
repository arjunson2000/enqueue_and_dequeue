#include<stdio.h>
#include<stdlib.h>
#define len 20
int items[len],rear=-1,front=-1;
void enqueue(int val)
{
    if(rear == len-1)
        printf("\nqueue is full");
    else {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = val;
        printf("\nthe inserted value is %d", val);
    }
}
void dequeue()
{
	if(front == -1)
        printf("\nqueue is empty");
    else
	{
        printf("\nthe deleted value is : %d", items[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}
void display()
{
	if(rear == -1)
        printf("\nqueue is empty");
    else
	{
        int i;
        printf("\nqueue elements are:\n");
        for(i=front; i<=rear; i++)
        printf("%d\t",items[i]);
    }
}
main()
{
	int ch,v,flag=0;
	while(flag==0)
	{
		printf("\n 1 for enqueue, 2 for dequeue, 3 for display, 4 to exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("enter the value to enqueue:\n");
					scanf("%d",&v);
					enqueue(v);
					break;
			case 2:
					dequeue();
					break;
			case 3:
					display();
					break;
			case 4:
					flag=1;
					break;
			default:
					printf("wrong input");
					break;
		
		}
	}
}
