#include<stdio.h>
void dollor()
{
	int dollor, rupee;
	printf("Enter dollor:  ");
	scanf("%d",&dollor);
	rupee=85*dollor;
	printf("Rupees: %d\n",rupee);
}
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
	printf("Dollor convorter:\n");
	printf("....................\n");
	dollor();
	printf("Meter converter:\n");
	printf("...................\n");
	hello();
}
