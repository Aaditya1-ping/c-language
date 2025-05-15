#include<stdio.h>

int calci(int a, int b, int choice)
{
	printf(".....<<<Menu>>>.....");
	printf("\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for Percentage.");
	printf("\nPress 0 for exit");
	
	

	for(; ;)
	{
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition: %d",a+b);
			break;
		case 2:
			printf("Sub: %d",a-b);
			break;
		case 3:
			printf("Multi: %d",a*b);
			break;
		case 4:
			printf("Division: %d",a/b);
			break;
		case 5:
			printf("Per: %0.2f",(a+b)*100/200);
			break;
		case 0:
			printf("Thank you");
			return 0;
		default:
			printf("Try again");
			break;
	}
    }
    return a,b;
}

int main()
{

	int x,y,ans, Choice;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	
	ans=calci(x,y,Choice);
}

/*
  Output:

Enter first number: 4
Enter second number: 2
.....<<<Menu>>>.....
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for Percentage.
Press 0 for exit
Enter your choice: 1
Addition: 6
Enter your choice: 2
Sub: 2
Enter your choice: 3
Multi: 8
Enter your choice: 0
Thank you
-
*/