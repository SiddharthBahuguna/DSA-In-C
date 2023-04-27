#include <stdio.h>
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	
	if(x&1)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	getch();
}
