#include <stdio.h>
#include <string.h>
int main()
{
	char s[20],l;
	printf("Enter your name:");
	gets(s);
	
	strlen(s);
	l=strlen(s);
	printf("Length of %s is %d",s,l);
	return 0;
}
