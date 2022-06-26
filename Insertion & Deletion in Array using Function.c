#include<stdio.h>
#include<stdlib.h>

int insertion(int arr[],int s, int pos, int val)
{
	for(int i=s+1;i>=pos-1;i--)
		arr[i]=arr[i-1];
	arr[pos-1]=val;
		
	printf("\nInsertion successful.\n");
	for(int i=0;i<=s;i++)
		printf("%d, ",arr[i]);
}

int deletion(int arr[], int s, int pos)
{
	for( int i=pos-1;i<s;i++)
	{
		arr[i]=arr[i+1];
	}	
	s--;
	printf("\nDeletion Successful.\n");
	for(int i=0;i<=s;i++)
		printf("%d, ",arr[i]);
}

int searching(int arr[], int s, int search)
{
	for (int i=0;i<s;i++)
	{
		if(arr[i]==search)
		return i+1;
	}
	return -1;
}

int main()
{
	int arr[20];
	int s,i,ch,pos,val,search;
	 
	printf("Enter the size of Array.\n");
	scanf("%d",&s);
		
	printf("Enter the Array elements.\n");
	for(i=0;i<s;i++)
		scanf("%d",&arr[i]);
	
	printf("\nYour Array elements are: \n");
	for(i=0;i<s;i++)
		printf("%d, ",arr[i]);
	
	for ( ; ; )
	{
		printf("\n\n****Enter a choice****");
		printf("\nPress 1 for Insertion. \n");
		printf("Press 2 for Deletion. \n");
		printf("Press 3 for Search an Element. \n");
		printf("Press 4 for EXIT. \n");
		
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the Position.");
				scanf("%d",&pos);
				printf("Enter the value.");
				scanf("%d",&val);
				insertion(arr,s,pos,val);
				break;
				
			case 2:
				printf("Enter the Position where you want to DELETE the data.\n");
				scanf("%d",&pos);
				deletion(arr,s,pos);
				break;
				
			case 3:
				printf("Enter your SEARCH value. \n");
				scanf("%d",&search);
				searching(arr, s, search);
				int x = searching(arr, s, search);
				if(x==-1)
					printf("\nElement is not Present in Array.");
				else
					printf("\n %d is Found at %d Position.",search,x);
				break;
				
			case 4:
				printf("\n\n\tSuccessfully EXIT;");
				exit(0);
				break;
			
			default:
				printf("Wrong Choice.");
				break;
		}
	}
	return 0;
}
