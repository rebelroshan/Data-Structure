#include<stdio.h>
#include<stdlib.h>
#define s 4
int queue[s], front=-1, rear=-1;

void enqueue();
void dequeue();
void traverse();
int main()
{
	printf("Your QUEUE size is %d.",s);
	int item;
	for ( ; ; )
	{
		int choice;
		printf("\n\n****Enter your Choice.****\n");
		printf("Press 1 for Insertion.\n");
		printf("Press 2 for Deletion.\n");
		printf("Press 3 for Traverse.\n");
		printf("Press 4 for EXIT.\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					enqueue();
					break;
				}
				
			case 2:
				{
					dequeue();
					break;
				}
			
			case 3:
				{
					traverse();
					break;
				}	
				
			case 4:
			{
				printf("\n\n\t****Successfully EXIT.****\n");
				exit(0);
				break;	
			}	
			
			default:
				{
					printf("\nPlease choose the correct option.");
					break;
				}
		}
				
	}
	return 0;
}

void enqueue()
{
	int item;
	if (front==-1 && rear==-1)
	{
		front = front+1;
		rear = rear+1;
	}
				
	if ( rear==s)
		printf("\nQueue is OVERFLOW:\n");
				
	else if ( front==rear && rear>0)
		front = rear = -1;
					
	else
	{
		printf("Enter QUEUE elements:\n");
		scanf("%d",&item);
		queue[rear]=item;
		rear++;
	}
}

void dequeue()
{
	printf("\nDeletion of QUEUE");
	if ( front ==-1)
	{
		front=0;
		printf("\nYour QUEUE is Empty.");
	}
					
	else
	{
		printf("\nDelete Item = '%d'",queue[front]);
		front++;
		if( front>rear)
			front=rear=-1;
	}
}
void traverse()
{
	if (front==-1)
	printf("\nQUEUE is Empty.");
					
	else
	{
		printf("\nYour QUEUE elements are:\n");
		for ( int i=front; i<rear;i++)
			printf("%d\n",queue[i]);
	}
}
