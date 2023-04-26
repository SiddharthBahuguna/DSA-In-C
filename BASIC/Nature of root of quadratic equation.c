#include <stdio.h>
int main()
{
	int a,b,c,D;
	printf("Enter coefficient of x^2,x & constant term:");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	
	if(D<0)
	{
		printf("No Roots");
	}
	if(D==0)
	{
		printf("Equal Roots");
	}
	if(D>0)
	{
		printf("Two Distinct Roots");
	}
	getch();
}
