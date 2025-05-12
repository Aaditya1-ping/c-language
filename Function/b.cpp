#include<stdio.h>

int dollor()
{
	int dollor, rupee;
	printf("Enter dollor: ");
	scanf("%d",&dollor);
	rupee=85*dollor;
	return rupee;
}

int main()
{
	int ans;
	ans=dollor();
	printf("Ans: %d",ans);
}