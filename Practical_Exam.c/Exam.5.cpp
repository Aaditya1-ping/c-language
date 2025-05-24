#include<stdio.h>
int main()
{
  int i, j, space;
  for(int i=10; i>=6; i--)
  
  {
  	for (space=6; space<i; space++)
  	{
	  printf("-");
  }	
  for(j=i; j<=10; j++)
  {
  	printf("%d",j);
  }
  printf("\n");
}
}
/*
Output:
----10
---910
--8910
-78910
678910


*/