#include <stdio.h>
int main()
{
	int a,b,i,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	c=b;
	else
	c=a;
	for(i=2;i<=c;i++)
	{
		if(a%i==0 && b%i==0)
		break;
		
	}
	if(i==c+1)
	printf("\nCo-prime");
	else 
	printf("Not Co-prime");
	getch();
}
