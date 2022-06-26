#include<stdio.h>

int partition(int array[], int start, int end)
{
	int pivot=array[end];
	int i= start-1;
	
	for( int j=start;j<=end;j++)
	{
		if(array[j]<pivot)
		{
			i++;
			int temp=array[i];
			array[i]= array[j];
			array[j]=temp;
		}
	}
	int temp=array[i+1];
	array[i+1]=array[end];
	array[end]=temp;
	return (i+1);
}

void quickSort(int array[], int start, int end)
{
	if (start<end)
	{
		int p=partition( array, start, end);
		quickSort(array, start, p-1);
		quickSort(array, p+1, end);
	}
}

int main()
{
	int array[20],n ,i;
	
	printf("Enter the size of Array:\n");
	scanf("%d",&n);
	
	printf("Enter the Array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	quickSort(array,0,n-1);
	printf("Array Sorted by Quick sort Techniuque:\n");
	for(i=0;i<n;i++)
		printf("%d, ",array[i]);
	
	return 0;
}