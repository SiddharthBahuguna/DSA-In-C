#include <stdio.h>
#include <string.h>
int main()
{
	int i,word=1;
	char str[100];
	printf("Enter a word:");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='100')
		{
			word++;
		}
	}
	printf("Number of words are %d:",word);
	return 0;
	
}
