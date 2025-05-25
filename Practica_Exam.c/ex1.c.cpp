#include<stdio.h>
int main()
{
	int phy, chem, maths, total;
	printf("Enter the marks of phy: ");
	scanf("%d",&phy);
	printf("Enter the marks of chem: ");
	scanf("%d",&chem);
	printf("Enter the marks of maths: ");
	scanf("%d",&maths);
	total=phy+chem+maths;
	float average;
	average=(total*100)/300;
	printf("Average: %0.2f",average);
	
	average>=90 ? printf("\nGrdae: A"):
		average>=80 ? printf("\nGrade: B"):
			average>=70 ? printf("\nGrade: C"):
				average>=60 ? printf("\nGrade: D"):
					average>=50 ? printf("\nGrade"):
						printf("\nFailed");
	
	
}