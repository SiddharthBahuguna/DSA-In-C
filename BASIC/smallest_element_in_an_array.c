#include <stdio.h>
int main()
{
	int i,min,a[10];
	printf("Enter 10 numbers:");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	min=a[0];
	for(i=1;i<=9;i++)
	if(a[i]<min)
	min=a[i];
	printf("Smallest element is:%d",min);
	getch();
}
