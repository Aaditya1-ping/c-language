#include <stdio.h>

#define TOTAL_STUDENTS 5


struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Student students[TOTAL_STUDENTS];
    int i;
    float percentage;

 
    for (i = 0; i < TOTAL_STUDENTS; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 

        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);

        printf("Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);

        printf("Physics Marks: ");
        scanf("%d", &students[i].phy_marks);

        printf("\n");
    }

  
    printf("\nMark Sheet:\n");
    printf("-------------------------------------------------------------\n");
    printf("Roll No\tName\t\tChem\tMaths\tPhysics\tPercentage\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < TOTAL_STUDENTS; i++) {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        percentage = (float)total / 3;

        printf("%d\t%-15s\t%d\t%d\t%d\t%.2f%%\n",
               students[i].roll_no,
               students[i].name,
               students[i].chem_marks,
               students[i].maths_marks,
               students[i].phy_marks,
               percentage);
    }

}
/*
   Output: 
   
Enter details for Student 1:
Roll No: 1
Name: aayush bk
Chemistry Marks: 95
Mathematics Marks: 97
Physics Marks: 99

Enter details for Student 2:
Roll No: 2
Name: anish bk
Chemistry Marks: 90
Mathematics Marks: 95
Physics Marks: 96

Enter details for Student 3:
Roll No: 3
Name: bipin bk
Chemistry Marks: 90
Mathematics Marks: 80
Physics Marks: 95

Enter details for Student 4:
Roll No: 4
Name: saugat timil
Chemistry Marks: 90
Mathematics Marks: 80
Physics Marks: 85

Enter details for Student 5:
Roll No: 5
Name: ganesh neupane
Chemistry Marks: 90
Mathematics Marks: 80
Physics Marks: 75


Mark Sheet:
-------------------------------------------------------------
Roll No Name            Chem    Maths   Physics Percentage
-------------------------------------------------------------
1       aayush bk       95      97      99      97.00%
2       anish bk        90      95      96      93.67%
3       bipin bk        90      80      95      88.33%
4       saugat timil    90      80      85      85.00%
5       ganesh neupane  90      80      75      81.67%

*/