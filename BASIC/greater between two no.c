#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		printf("Greater number is:%d",a);
	}
	if(a<b)
	{
		printf("Greater number is:%d",b);
	}
	getch();
}
