#include<stdio.h>
int main()
{
	char a[100];
	printf("Enter any string: ");
	scanf("%s",&a);
	int length;
	for(int i=0; a[i]!='\0'; i++)
	{
		length++;
	}
	
	int *ptr;
    ptr=&a;
	printf("Length of string: %d => %u",length,ptr);
}

/*
   Output:
Enter any string: aaditya
Length of string: 7 => 6749600

*/