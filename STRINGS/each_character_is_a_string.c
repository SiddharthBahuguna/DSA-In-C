#include <stdio.h>
int main()
{
	char str[500];
	int i,c[100]={0};
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	c[str[i]]++;
	
	for(i=0;i<100;i++)
	{
		if(c[i]>1)
		printf("\n %c ........>%d times",c[i]);
		
	}
	return 0;
}
