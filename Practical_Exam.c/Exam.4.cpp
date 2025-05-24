#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("array[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int *i;
	for(int i=0; i<n; i++)
	{
		if(i%2==0)
		{
			printf("Even: %d,",i);
		}
	}
}

/*
  Outout:
  
Enter the size of array: 5
array[0]: 1
array[1]: 2
array[2]: 3
array[3]: 4
array[4]: 5
Even: 0,Even: 2,Even: 4,
-
*/