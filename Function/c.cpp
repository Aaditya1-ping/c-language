#include<stdio.h>

void hello()
{
	int feet, meter;
	printf("Enter feet: ");
	scanf("%d",&feet);
	meter=3*feet;
	printf("Meter: %d",meter);
}

int main()
{
	hello();
}