#include <stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)                  
	{
		count++;
		n=n/10;
	}
	printf("Count is:%d",count);
	getch();
}
