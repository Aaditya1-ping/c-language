#include<stdio.h>

int main()
{
	int i,j, space;
	for(int i=10; i>=6; i--)
	{
		for(space=6; space<i; space++)
		{
			printf("- ");
		}
		for(j=i; j<=10; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
/*
Output: 
- - - - 10
- - - 9 10
- - 8 9 10
- 7 8 9 10
6 7 8 9 10

*/