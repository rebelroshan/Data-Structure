#include<stdio.h>
int sort(int *a, int n);
int swap(int *a, int j);
int main()
{
	int *a;
	int i,j,n;
	
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	a=(int*) malloc(n*sizeof(int));
	
	printf("Enter the array Elements.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	sort(a,n);
	
	printf("Insertion Sort is Done.\n");	
	for(i=0;i<n;i++)
		printf("%d, ",*(a+i));
		
	return 0;
}
int swap(int *a, int j)
{
	int temp=*(a+j);									
	*(a+j)=*(a+j-1);
	*(a+j-1)=temp;
}

int sort(int *a, int n )
{
	for(int i=1;i<n;i++)
	{
		int j=i;
		while ((j>0) && (*(a+j-1) > *(a+j)))
		{
			swap(a,j);
			j--;
		}
	}
}