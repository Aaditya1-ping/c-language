#include<stdio.h>
int main()
{
	int n, odd;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("array[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(i%2!=0)
		{
			printf("Odd: %d,",i);
		}
	
	}
}

/*
Enter the size of array: 4
array[0]: 1
array[1]: 2
array[2]: 3
array[3]: 4
Odd: 1,Odd: 3,
-
*/
	