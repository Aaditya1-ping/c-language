#include<stdio.h>
int main()
{
	int  row, cols, i, j;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of column: ");
	scanf("%d",&cols);
	
	int a[row][cols],	 transpose[cols][row];
	for(i=0; i<row; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	 
	
	 printf("Original matrix: \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	

	
	for(i=0; i<row; i++)
	{
		for(j=0; j<cols; j++)
		{
		  transpose[j][i]=a[i][j];
		}
		
	}
	
	printf("Transpose matrix:\n");
	
	for(i=0; i<cols; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	
}
/* Outputs:
   
   Original matrix
   1 2 3
   4 5 6
   7 8 9
   Transpose matrix
   1 4 7
   2 5 8
   3 6 9

*/
