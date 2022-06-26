#include<stdio.h>

int fib(int);
int main()
{
	int i,n;
	printf("Enter the number of elements in series.\n");
	scanf("%d",&n);
	printf("FIBONACCI series is: \n");
	for(i=0;i<n;i++)
		printf("%d, ",fib(i));
	return 0;
}

int fib(int i)
{
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
		return(fib(i-1) + fib(i-2));
}