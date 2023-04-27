#include <stdio.h>
int main()
{
	int num,r;
	printf("Enter the digit:");
	scanf("%d",&num);
	r=num%5;
	
	if(r==0)
	{
		printf("Number is divisible by 5");
	}
	
	if(r>0)
	{
		printf("Number is not divisible by 5");
	}
	getch();
}
