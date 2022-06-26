#include<stdio.h>

int bubblesort(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[10], i,n;
	
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	
	printf("Enter the array Elements.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	
	printf("Bubble Sort is Done.\n");
	bubblesort(a,n);
	
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
		
	return 0;
}