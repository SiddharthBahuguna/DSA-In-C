#include <stdio.h>
int main()
{
	int a,b,c,choice;
	printf("Enter the length of triangles:");
	scanf("%d %d %d",&a,&b,&c);
	
	switch(choice)
	{
		case 1:printf("Isosceles Triangle");
		if(a=b || b=c || c=a )
		else
		break;
		
		case 2:printf("Right Triangle");
		if(a+b>c && c+b>a && a+c>b)
		break;
		
		case 3:printf("Equilateral Triangle");
		if(a=b=c)
		break;
		
		
	}
	getch();
}
