#include <stdio.h>
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	
	if(x==0)
	{
		printf("Zero");
	}
	if(x>0)
	{
		printf("Positive");
	}
	if(x<0)
	{
		printf("Negative");
	}
	getch();
}
