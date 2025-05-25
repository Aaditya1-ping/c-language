#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("Array[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d,",i);
		}
	}
}

/*
Output: 
Enter size of array: 5
Array[0]: 1
Array[1]: 2
Array[2]: 3
Array[3]: 4
Array[4]: 5
2,4,
*/