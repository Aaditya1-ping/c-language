#include<stdio.h>
int main()
{
	int row, cols, i, j, max;
	printf("Number of rows: ");
	scanf("%d",&row);
	printf("Number of column: ");
	scanf("%d",&cols);
	
	int a[row][cols];
	for(i=0; i<row; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	max=a[0][0];
	for(i=0; i<row; i++)
	{
		for(j=0; j<cols; j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
			}
			
		}
	}
	
	printf("The largest element is: %d",max);
}

/*
 Input:{1,2,3,4,5,6,7,8,9}
 Output:{The largest element is:9}
*/