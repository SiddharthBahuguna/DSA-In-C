#include <stdio.h>
int main()
{
	int num;
	printf("Enter the value:");
	scanf("%d",&num);
	num=num%10;
	printf("%d",num);
	getch();
	
}
