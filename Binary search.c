#include<stdio.h>

int binarysearch(int a[], int first, int last, int value)
{
	if(first<=last)
	{
		int mid=first+(last-1)/2;
		if(a[mid]==value)
			return mid;
		if(a[mid]>value)
			return binarysearch(a, first, mid-1, value);
		return binarysearch(a, mid+1,last,value);
	}
	return -1;
}
int main()
{
	int a[20],i,j,n,value;
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	
	printf("Enter the Array Elements.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	
	printf("Array are sorted.\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
	
	printf("\nEnter the Search Value.\n");
	scanf("%d",&value);
	
	int result = binarysearch(a, 0, n-1, value);
	
	if (result==-1)
		printf("\nElement not found in Array.");
	else
		printf("\n  %d is Present at %d Position.",value,result+1);
	return 0;