#include<stdio.h>

int linearsearch(int a[], int n, int value)
{
	for (int i=0;i<n;i++)
	{
		if(a[i]==value)
		return i+1;
	}
	return -1;
}

int main()
{
	int a[20], i,n,value;
	
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	
	printf("Enter the array Elements.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Your Array elements are-\n");
	for(i=0;i<n;i++)
		printf("%d,  ",a[i]);
	
	printf("\nEnter the VALUE that you want to Search:\n");
	scanf("%d",&value);
	
	int x = linearsearch(a, n, value);
	
	if(x==-1)
	printf("\nElement is not Present in Array.");
	else
	printf("\n %d is Found at %d Position.",value,x);
	
}