#include<stdio.h>
#include<string.h>


void towerofHanoi(int n,char fromtower, char totower, char auxtower)
{
	if (n==1)
	{
		printf("\n Move Disk 1 from Tower %c -> %c",fromtower, totower);
		return 0;
	}
	
	towerofHanoi(n-1,fromtower,auxtower,totower);
	printf("\n Move Disk %d from Tower %c -> %c.",n,fromtower,totower);
	towerofHanoi(n-1,auxtower,totower,fromtower);
}


int main()
{
	int n;
	char A , B, C;
	printf("Enter the number of Disk.\n");
	scanf("%d",&n);
	towerofHanoi( n, 'A' , 'C', 'B');
	return 0;
}