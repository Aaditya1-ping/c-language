#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    char fruit[100], colour[100];
 printf("Enter the number of fruit: ");
 scanf("%d",&n);
 fp=fopen("data.txt","w");
 if(fp==NULL)
 {
 	printf("File not opened..............");
 }
 for(int i=1; i<=n; i++)
 {
 	printf("Enter the name of fruit: ");
 	scanf("%s",&fruit);
 	printf("Enter colour name of fruit: ");
 	scanf("%s",&colour);
 	
 	fprintf(fp,"%s= %s,",fruit,colour);
 }
 fclose(fp);
 printf("Data written to file data.txt successfully..");
}
/*
output:
Enter the number of fruit: 2
Enter the name of fruit: apple
Enter colour name of fruit: red
Enter the name of fruit: banana
Enter colour name of fruit: yellow
Data written to file data.txt successfully..
-
in file:
apple= red,banana= yellow,
*/