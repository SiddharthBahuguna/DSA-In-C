#include <stdio.h>
int main()
{
	char str[100];
	int i,n;
	printf("Enter a string:");
	gets(str);
	
	for(n=0;str[n]!='\0';i++)
	for(i=0;i<n/2;i++)
	{
		if(isPalindrome(str)==1)
		printf("Palindrome");
		else 
		printf("Not Palindrome");
	}
	
	int isPalindrome(char*s)
	{
		int i,n;
		for(n=0;str[n]!='\0';n++)
		for(i=0;i<n/2;i++)
		{
			if(s[i]!=s[n-1-i])
			return 0;
			
		}
		return 1;
	}
	
	}
