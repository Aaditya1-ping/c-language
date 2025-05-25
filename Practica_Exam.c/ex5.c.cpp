#include<stdio.h>

struct laptop
{
	 char Company_name[50];
	 char processor[10];
	 int price;
};
int main()
{
	int i;
	struct laptop l;
	printf("Enter the company name of laptop: ");
	scanf("%s",&l.Company_name);
	printf("Enter the processor of laptop:");
	scanf("%s%d",&l.processor,&i);
	printf("Enter the price of laptop: ");
	scanf("%d",&l.price);
	
	printf("Company Name: %s",l.Company_name);
	printf("\nProcessor: %s%d",l.processor,i);
	printf("\nPrice: %d",l.price);
	
}
/*
Output:
Enter the company name of laptop: Dell
Enter the processor of laptop:i 5
Enter the price of laptop: 34000
Company Name: Dell
Processor: i5
Price: 34000
*/