#include<stdio.h>
int main()
{
	int row, cols, i, j;
	printf("Enter number of row: ");
	scanf("%d",&row);
	printf("Enter number of column: ");
	scanf("%d",&cols);
	 
	 int a[row][cols];
	 for(i=0; i<row; i++)
	 {
	 	for(j=0; j<cols; j++)
	 	{
	 		printf("a[%d][%d]: ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	 }
	 
	 printf("The matrix is: \n");
	 for(i=0; i<row; i++)
	 {
	 	for(j=0; j<cols;  j++)
	 	{
	 	   printf("%d ",a[i][j]);	
		} 
		printf("\n");
	 } 
	 
	 
    printf("\nRow-wise elements and their sums:\n");
    for (i = 0; i < row; i++) {
        int rowSum = 0;
        printf("Row %d: ", i + 1);
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
            rowSum += a[i][j];
        }
        printf("=> Sum = %d\n", rowSum);
    }
    
    printf("\nColumn-wise elements and their sums:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0;
        printf("Column %d: ", j + 1);
        for (i = 0; i < row; i++) {
            printf("%d ", a[i][j]);
            colSum += a[i][j];
        }
        printf("=> Sum = %d\n", colSum);
    }
}
/* Output:

The matrix is:
1 2 3
4 5 6
7 8 9

Row-wise elements and their sums:
Row 1: 1 2 3 => Sum = 6
Row 2: 4 5 6 => Sum = 15
Row 3: 7 8 9 => Sum = 24

Column-wise elements and their sums:
Column 1: 1 4 7 => Sum = 12
Column 2: 2 5 8 => Sum = 15
Column 3: 3 6 9 => Sum = 18  

*/