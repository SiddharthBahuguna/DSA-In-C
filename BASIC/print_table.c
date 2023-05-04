#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	printf("%dX%d=%d\n",n,i,n*i);
	getch();
}
