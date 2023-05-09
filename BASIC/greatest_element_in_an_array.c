#include <stdio.h>
int main()
{
	int i,max,a[10];
	printf("Enter 10 numbers:");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	max=a[0];
	for(i=1;i<=9;i++)
	if(a[i]>max)
	max=a[i];
	printf("Greatest element is:%d",max);
	getch();
	
}
