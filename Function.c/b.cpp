#include<stdio.h>
 
 int hello(int a, int b, int c)
 {
   printf("Sum of all number is: %d", a+b+c);
   printf("\nMultiple of all number is: %d", a*b*c);
   printf("\nSquare of first number is: %d",a*a);
   printf("\nSquare of second number is: %d",b*b);
   printf("\nSquare of third number is: %d",c*c);
   
   
   return a,b,c;
}

int main()
{
  int x, y, z, ans;
  
  printf("Enter first number: ");
  scanf("%d",&x);
  printf("Enter second number: ");
  scanf("%d",&y);
  printf("Enter third number: ");
  scanf("%d",&z);
  
  ans=hello(x,y,z);
  
}