#include <stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	
	case 1:printf(" Addition is:%d",a+b);
	 break;
    case 2:printf("Subtraction is:%d",a-b);
	break;
	case 3:printf("Multiplication is:%d",a*b);
	break;
	case 4:printf("Division is:%d",a/b);
	break;
	default:printf("Error");
}
	getch(); 
	
}
