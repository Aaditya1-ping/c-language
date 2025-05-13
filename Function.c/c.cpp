#include<stdio.h>
 
 void hello()
 {
  int n, sum=0;
  printf("Enter number array: ");
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++)
  {
   printf("array[%d]: ",i);
   scanf("%d",&a[i]);
   }
  for(int i=0; i<n; i++)
  {
  sum=sum+a[i];
}

  
  printf("Sum of all number: %d",sum);
}
  int main()
  {
  
  hello();
  }
  