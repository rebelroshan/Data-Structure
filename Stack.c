#include<stdio.h>
#include<stdlib.h>
#define s 5

int stack[s];
int top=-1;

void push();
void pop();
void traverse();
int main()
{
	printf("The SIZE of STACK is: %d",s);
		
	for ( ; ; )
	{
		int choice;
		printf("\n\n****Enter your choice:****");
		printf("\nPress 1 for PUSH operation.");
		printf("\nPress 2 for POP operation.");
		printf("\nPress 3 for Traverse.");
		printf("\nPress 4 for EXIT.\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push();
				break;
				
			
			case 2:
				pop();
				break;
			
			case 3:
				traverse();
				break;
				
			case 4:
				printf("\nSuccessfully EXIT: ");
				exit(0);
				break;
				
			default:
				printf("\n !!--Invalid command--!!");
				break;	
						
		}	
		
	}
	return 0;
}

void push()
{
	int data;
	
	if(top==s-1)
	{
		printf("!!-Stack Overflow-!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&data);
		top++;
		stack[top]=data;
	}
}
 
void pop()
{
	if(top==-1)
	{
		printf("!!-Stack Underflow-!!");
	}
	else
	{
		printf("\nPopped element:  %d",stack[top]);
		top--;
	}
}
 
void traverse()
{
	
	
	if(top==-1)
	{
		printf("!!-Stack Underflow-!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}