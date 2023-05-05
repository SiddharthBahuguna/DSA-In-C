#include <stdio.h>
int main()
{
	int i=1,n,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n>=i)
	{
		s=i*i*i+s;
		i++;
	}
	printf("Sum:%d",s);
	getch();
}
