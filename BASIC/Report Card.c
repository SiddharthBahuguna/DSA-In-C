#include <stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	printf("Enter the marks of 5 subjects: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
    sum=(a+b+c+d+e)/5;
    
    if(sum>40)
    {
    	printf("Pass");
	}
	if(sum<40)
	{
		printf("Fail");
	}
	if(sum>60)
	{
		printf(" 1st Division");
	}
	if(sum>40)
	{
	   printf(" 2nd Divison");
     }
     getch();
}
