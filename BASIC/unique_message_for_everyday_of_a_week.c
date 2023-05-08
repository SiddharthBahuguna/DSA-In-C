#include <stdio.h>
int main()
{
    int ch,choice;
	printf("Enter a number to receive a greeting for the day of week:");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	
	case 1:printf("Today is Sunday",ch);
	break;
	
	case 2:printf("Today is Monday",ch);
	break;
	
	case 3:printf("Today is Tuesday",ch);
	break;
	
	case 4:printf("Today is Wednesday",ch);
	break;
	
	case 5:printf("Today is Thursday",ch);
	break;
	
	case 6:printf("Today is Friday",ch);
	break;
	
	case 7:printf("Today is Saturday",ch);
	break;
	
	default:printf("****");
   }
   
	getch();
}
