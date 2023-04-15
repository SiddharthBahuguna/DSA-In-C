#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	int i;
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i];i++)
	{
		if(str[i]>='a' && str[i]<='z')
		str[i]=str[i]-32;
		
	}
	printf("%s",str);
	return 0;
}
