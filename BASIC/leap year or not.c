#include <stdio.h>
int main()
{
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%100)
	{
		if(year%4)
		printf("Not Leap Year");
		else
		printf("Leap Year");
		
	}
	
	else
	{
		if(year%400)
		printf("Not Leap Year");
		else
		printf("Leap Year");
	}
	getch();
}
