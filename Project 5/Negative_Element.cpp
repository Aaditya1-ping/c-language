#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of array: ");
	scanf("%d",&n);
	
	int a[n], i;
	for(i=0; i<n; i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative number are:\n");
   for(i=0; i<n; i++)
   {
   	if(a[i]<0)
   	{
   		printf("%d",a[i]);
	}
   }
	
}

/*
   Enter elements of array=> {1, 2, -4, -2, 5, -6}
   Output=> {-4, -2, -6}
*/