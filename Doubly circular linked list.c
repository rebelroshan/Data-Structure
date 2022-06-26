#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q,*r,*s;
int n,i,ch,pos;

int main()
{
	
	for( ; ; )
	{
		printf("Press 1 for Implemantation of Linked List:\n\n");
		printf("Press 2 for Insertion at the Begining:\n");
		printf("Press 3 for Insertion at the Ending:\n");
		printf("Press 4 for Insertion at Any Where:\n\n");
		printf("Press 5 for Deletion at the Begining:\n");
		printf("Press 6 for Deletion at the Ending:\n");
		printf("Press 7 for Deletion at Any Where:\n\n");
		printf("Press 8 for Traverse of All Node:\n");
		printf("Press 9 for Exit:\n\n");
		printf("***Kindly Enter Your Choice:***\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				impliment();
				break;
			case 2:
				beg_insert();
				break;
			case 3:
				end_insert();
				break;
			case 4:
				any_where_insert();
				break;
			case 5:
				beg_delete();
				break;
			case 6:
				end_delete();
				break;
			case 7:
				any_where_delete();
				break;
			case 8:
				traverse();
				break;
			case 9:
				printf("\nSuccessfully exit.");
				exit(0);
				break;
			default:
				printf("Your Choice Is Invalid!!");
		}
	}
	return 0;
}

int impliment()
{
	printf("Enter Number Of Node:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("Enter your data:");
		scanf("%d",&p->data);
				
		p->next=p->prev=NULL;
		if(start==NULL)
		{
			start=p;
			p->prev=start;
			p->next=start;
		}
		else
		{
			q->next=p;
			p->prev=q;
			start->prev=p;
			p->next=start;
		}
		q=p;
	}
}
int beg_insert()
{
	printf("**Insertion at the Begining**\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("Enter your data:");
		scanf("%d",&p->data);
	
		for(q=start;q->next!=start;q=q->next);
		p->next=start;
		start->prev=p;
		p->prev=q;
		q->next=p;
		start=p;
	}
}
int end_insert()
{
	printf("**Insertion at the Ending**\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("Enter your data:");
		scanf("%d",&p->data);
		p->next=p->prev=NULL;					
		for(q=start;q->next!=start;q=q->next);
		q->next=p;
		p->prev=q;
		start->prev=p;
		p->next=start;
	}
}
int any_where_insert()
{
	printf("**Insertion at Any Where**\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		printf("Enter Position:\n");
		scanf("%d",&pos);
		p=(NODE*)malloc(sizeof(NODE));
		printf("Enter your data:");
		scanf("%d",&p->data);
								
		q=start;
		while(pos>1)
		{
			r=q;
			q=q->next;
			pos--;
		}
		r->next=p;
		p->prev=r;
		p->next=q;
		q->prev=p;	
	}
}
int beg_delete()
{
	printf("**Deletion at the Begining**\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		for(r=start;r->next!=start;r=r->next);
		q=start;
		start=start->next;
		r->next=start;
		free(q);
	}
}
int end_delete()
{
	printf("**Deletion at the Ending**\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		for(q=start;q->next!=start;q=q->next)
			r=q;
		r->next=start;
		start->prev=r;
		free(q);
	}
}
int any_where_delete()
{
	printf("***Deletion at Any Where\n");
	if(start==NULL)
	{
		printf("You Should Create A Linked List!\n");
	}
	else
	{
		printf("Enter Position:\n");
		scanf("%d",&pos);
		q=start;
		while(pos>1)
		{
			r=q;
			q=q->next;
			pos--;
		}
		s=q->next;
		r->next=s;
		s->prev=r;
		free(q);	
	}
}
int traverse()
{
	printf("**Traverse All NODE**\n");
	q=start;
	do
	{
		printf("Data :%d\n",q->data);
		q=q->next;
	}while(q!=start);
	printf("\n");
}