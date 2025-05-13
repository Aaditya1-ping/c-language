#include<stdio.h>
void hello(int x)
{
printf("Square of given number is: %d",x*x);
}

int main()
{
  int a;
 printf("Enter any number: ");
 scanf("%d",&a);
 hello(a);
}
