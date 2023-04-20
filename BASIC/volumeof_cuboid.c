#include <stdio.h>
int main()
{
	float l,b,h,volume;
	printf("Enter the value of length,breadth & height of a cuboid:");
	scanf("%f %f %f",&l,&b,&h);
	volume=l*b*h;
	printf("The volume of cuboid is:%f",volume);
	getch();
	
	
	
}
