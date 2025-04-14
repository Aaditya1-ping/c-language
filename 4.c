#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x:");
	scanf("%d",& x);
	int y;
	printf("enter the value of y:");
	scanf("%d",& y);
	int ans;
	ans=(x+y)*(x+y)*(x+y);
	printf("the ans is:%d",ans);
	}