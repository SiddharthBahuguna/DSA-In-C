#include <stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(a>=n)
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	
	else
	printf("Not Fibonacci");
	getch();
	
}
