#include<stdio.h>
int main()
{
	int n;
	printf("Enter array's size: ");
	scanf("%d",&n);
	 int a[n][n];
	 for(int i=0; i<n; i++)
	 {
	 	for(int j=0; j<n; j++)
	 	{
		 
	 	printf("array[%d][%d]: ",i,j);
	 	scanf("%d",&a[i][j]);
	 }
	 }
	 
	 int cube, *ptr;
	 ptr=&a;
	 
     for(int i=0; i<n; i++)
	 {
	     for(int j=0; j<n; j++)
		 {
		 cube=a[i][j]*a[i][j]*a[i][j];
	 	
		 printf("\nCube of array[%d][%d]: %d ==> %u\n",i,j,cube,ptr);
         }
		 }
	 }
	 
/*
 Output:
 
Enter array's size: 2
array[0][0]: 2
array[0][1]: 2
array[1][0]: 2
array[1][1]: 2

Cube of array[0][0]: 8 ==> 6749536

Cube of array[0][1]: 8 ==> 6749536

Cube of array[1][0]: 8 ==> 6749536

Cube of array[1][1]: 8 ==> 6749536

*/	 
	 
	 


