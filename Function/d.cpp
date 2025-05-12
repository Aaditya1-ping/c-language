#include<stdio.h>

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
	int ans;
	ans=hello();
	printf("Ans: %d",ans);
}