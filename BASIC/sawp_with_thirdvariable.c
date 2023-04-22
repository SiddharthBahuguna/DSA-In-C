#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter any two values:");
	scanf("%d %d",&a,&b);
	temp=a+b;
	b=temp-b;
	a=temp-b;
	printf("%d %d",a,b);
	getch();
}
