#include <stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter the value of principal,rate & time period:");
	scanf("%f %f %f",&p,&r,&t);
	SI=p*r*t/100;
	printf("The Simple Interest is:%f",SI);
	getch();
}
