#include <stdio.h>
int main()
{
	char str[100];
	int i,len=0;
	printf("Enter a string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("The length of %s is %d:",str,len);
	return 0;
}
