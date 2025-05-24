#include<stdio.h>
int main()
{
	int row, column;
	float average;
	printf("Enter the row of array: ");
	scanf("%d",&row);
	printf("Enter the column of array: ");
	scanf("%d",&column);
	int array[row][column];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			printf("array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	int sum=0;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
		  sum=sum+array[i][j];
		}
	}
   average=sum/100;
    printf("\nAverage: %0.2f",average);
}
/*

*/