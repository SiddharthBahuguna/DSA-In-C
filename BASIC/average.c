#include <stdio.h>
int main()
{
	float a,b,c,average;
	printf("Enter the value of any three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	average=(a+b+c)/3;
	printf("The average is:%f",average);
	getch();
}
