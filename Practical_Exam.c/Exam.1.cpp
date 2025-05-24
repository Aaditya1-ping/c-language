#include<stdio.h>
int main()
{
	int phy, chem, maths, bio, hindi;
	printf("Enter the marks of phy: ");
	scanf("%d",&phy);
	printf("Enter the marks of chem: ");
	scanf("%d",&chem);
	printf("enter the marks of maths: ");
	scanf("%d",&maths);
	printf("Enter the marks of bio: ");
	scanf("%d",&bio);
	printf("Enter the marks of hindi: ");
	scanf("%d",&hindi);
	
	int total;
	total=phy+chem+maths+bio+hindi;
    float average;
    average=(total*100)/500;
    printf("Average of student: %0.2f",average);
	average>=90 ? printf("\nGarde: A"):
   80<=average<90 ? printf("\nGrade: B"):
   70<=average<80 ? printf("\nGarde: C"):
   60<=average<70 ? printf("\nGarde: D"):
   50<=average<60 ? printf("\nGrade: E"):
   printf("Failed.");	
	
}
/*
  Output:
Enter the marks of phy: 90
Enter the marks of chem: 90
enter the marks of maths: 90
Enter the marks of bio: 90
Enter the marks of hindi: 90
Average of student: 90.00
Garde: A
-
*/