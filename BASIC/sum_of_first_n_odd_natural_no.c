#include <stdio.h>
int main()
{
	int i=1,n,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n>=i)
	{
		s=2*i-1+s;
		i++;
	}
	printf("Sum:%d",s);
	getch();
}
