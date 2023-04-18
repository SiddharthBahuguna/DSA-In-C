#include <stdio.h>
int main()
{
	float r,area;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("The area of circle is:%f",area);
	getch();
}
