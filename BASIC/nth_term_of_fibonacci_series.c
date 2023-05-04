#include <stdio.h>
int main()
{
	int n,a=0,b=1,nextTerm=0,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n==0 || n==1)
	printf("%d",n);
	else
	nextTerm=a+b;
	for(i=3;i<=n;i++)
	
	{
		a=b;
		b=nextTerm;
		nextTerm=a+b;
	}
	printf("%d ",b);
	getch();
}
