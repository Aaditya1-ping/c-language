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
	
	printf("<<<Square of given number>>>");

	int square, *ptr;
	ptr=&a;
     for(int i=0; i<n; i++){
     	square=a[i]*a[i];
     	 printf("\nSquare of array[%d]: %d ==> %u\n",i,square,ptr);
	 }

	
	
}