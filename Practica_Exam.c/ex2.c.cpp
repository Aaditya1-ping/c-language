#include<stdio.h>

int main()
{
	int row, column;
	float average;
	
	printf("Enter number of row: ");
	scanf("%d",&row);
	printf("Enter number of column: ");
	scanf("%d",&column);
	int a[row][column];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			printf("array[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column;j++)
		{
			sum=sum+a[i][j];
			
		}
	}
		for(int i=0; i<row; i++)
	{
		for(int j=0; j<column;j++)
		{
			average=sum/(row+column);
			
		}
	}
printf("Average: %0.2f",average);

}

/*
 Output: 
Enter number of row: 2
Enter number of column: 2
array[0][0]: 12
array[0][1]: 34
array[1][0]: 56
array[1][1]: 78
Average: 45.00
-
*/