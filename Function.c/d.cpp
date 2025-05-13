#include<stdio.h>
void hello()
{
  char a[100];
  int length;
  printf("Enter a string: ");
  scanf("%s",&a);
  
  for(int i=0; a[i]!='\0'; i++)
  {
  length++;
}
printf("Length of string is: %d",length);
}

int main()
{
 hello();
}
