#include <stdio.h>
int main()
{
	int num;
	printf("Enter a digit:");
	scanf("%d",&num);
	num=num/10;
	printf("%d",num);
	getch();
}
