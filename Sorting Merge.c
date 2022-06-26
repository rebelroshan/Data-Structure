#include<stdio.h>
#include<stdlib.h>

int merge( int a[], int left, int mid, int right)
{
	int n1 = mid - left + 1 ;
	int n2 = right - mid;
	int L[n1];
	int R[n2];
	
	for( int i=0;i<=n1;++i)
		L[i]=a[left+i];
	for( int j=0;j<=n2;++j)
		R[j]=a[mid+1+j];
	
	int i=0,j=0;
	int k=left;
	
	while(i<n1 && j<n2)
	{
		if (L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		a[k]= R[j];
		j++;
		k++;
	}
}

int sort(int a[], int left, int right)
{
	if( left<right)
	{
		int mid=(left+right)/2;
		sort(a, left, mid);
		sort(a, mid+1, right);
		
		merge(a, left, mid, right);
	}
}

int main()
{
	int a[20], n;
	printf("Enter the size of Array.\n");
	scanf("%d",&n);
	
	printf("Enter the Array elements.\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	sort(a, 0, n-1);
	printf("Array sorted by Merge sort Technique.\n");
	for(int i=0;i<n;i++)
		printf("%d,\t",a[i]);
	
	exit(0);
}