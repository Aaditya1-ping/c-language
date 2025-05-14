#include<stdio.h>

void calculator()
{
     int choice,a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);

	
	printf("Enter your choice: ");
	printf("\n..................");
	printf("\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %");
	printf("\nPress 0 for exit.");
	
	 
	 for(int i=1; i<=5; i++)
	{
		printf("\nEnter your choice: ");
     	scanf("%d",&choice);

		
	
	switch(choice)
	{
		case 1: 
		    printf("Addition of a and b is: %d",a+b);
			break;
		case 2:
			printf("Substraction of a and b is: %d",a-b);
			break;
		case 3:
			printf("Multiple of a and b is: %d",a*b);
			break;
		case 4: 
		     printf("Division of a and b is: %d",a/b);
			 break;
		case 5: 
			printf("Percentage of a and b is: %d",(a+b)*100/200);
			break;
	
	
	}
}
	
	

	
	}

int main()
{
	 
 calculator();
}
 