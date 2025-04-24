#include<stdio.h>
int main()
{
	int i, n;

	printf("Enter any number:");
	scanf("%d",&n);
	i=n;
	do{if (i%2==0){printf("%d\n",i);
	
	}
i--;
	}while(i>=1);
}