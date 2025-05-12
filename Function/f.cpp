#include<stdio.h>
int dollor()
{
	int dollor, rupee;
	printf("Enter dollor: ");
	scanf("%d",&dollor);
	rupee=85*dollor;
	return rupee;
}

int hello()
{
	int feet, meter;
	printf("Enter feet: ");
	scanf("%d",&feet);
	meter=feet*3;
	return meter;
}

int main()
{
	int ans, answer;
	printf("Dollor converter:\n");
	printf("......................\n");
	ans=dollor();
	printf("Ans: %d\n",ans);
	printf("Meter converter:\n");
	printf("........................\n");
	answer=hello();
	printf("Ans: %d",answer);
}