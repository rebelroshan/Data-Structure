#include<stdio.h>

int main()
{
	int *a;
	int i,n;
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	a=(int*) malloc(n*sizeof(int));
	
	printf("Enter the array Elements.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
		
	
	printf("Selection Sort is Done.\n");
	sort(a,n);
	printArray(a,n);
	return 0;
}
int swap(int *a, int i, int j);
int sort(int *a,int  n);
int printArray(int *a, int n)
{
	for(int i=0;i<n;i++)
		printf("%d, ",*(a+i));
}

int swap(int *a, int i, int j)
{
	int temp=*(a+i);
	*(a+i)=*(a+j);
	*(a+j)=temp;
}

int sort(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(*(a+i)<*(a+j))
			{
				swap(a,i,j);
			}
		}
	}
}