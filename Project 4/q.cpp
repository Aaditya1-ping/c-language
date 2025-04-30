#include<stdio.h>
int main()
{
	int i, n, j=11;
	for(i=1; i<=4; i++)
	{
		for(n=1; n<=i; n++)
		{
		printf(" %d",j);
		j++;
	    }
		printf("\n");
	}
	
	    
}
/* Output:
  11
  12 13
  14 15 16
  17 18 19 20
*/