#include <stdio.h>
#include <string.h>
int main()
{
	char str[500];
	int i,n;
	printf("Enter a string:");
	gets(str);
	for(n=0;str[n]!='\0';n++)
	
	for(i=0;i<n/2;i++)
	{
		if(str[i]!=str(n-1-i))
		break;
	}
	if(i>=n/2)
	printf("Palindrome")
	else 
	printf("Not Palindrome")
	return 0;
}
