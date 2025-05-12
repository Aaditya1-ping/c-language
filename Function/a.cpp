#include<stdio.h>

void dollor()
{
	int dollor, rupee;
	printf("Enter dollor:  ");
	scanf("%d",&dollor);
	rupee=85*dollor;
	printf("Rupees: %d",rupee);
}


int main()
{
  dollor();
}