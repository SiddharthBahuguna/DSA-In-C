#include <stdio.h>
int main()
{
	int x,r;
	printf("Enter the digit:");
	scanf("%d",&x);
	r=x%2;
	
	if(r==0)
	{
		printf("Even");
	}
	if(r>0)
	{
		printf("Odd");
	}
	getch();
}
