#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	printf("Enter string:");
	gets(s);
	
	strlen(s);
	int l=strlen(s);
	printf("Length of %s is %d",s,l);
	return 0;
}
