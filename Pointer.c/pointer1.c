#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	int *ptr;
	ptr=&x;
	printf("x: %d ==> %u",x,ptr);
	
	int *z;
	z=&y;
	
	printf("\ny: %d ==> %u",y,z);
	
	printf("\n<<<After swaping the values>>>");
   int b=x;
	x=y;
	y=b;
	printf("\nx: %d ==> %u",x,ptr);
	printf("\ny: %d ==> %u",y,z);

	
}