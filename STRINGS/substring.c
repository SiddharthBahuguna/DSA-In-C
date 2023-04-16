#include <stdio.h>
int main()
{
	char a[100],b[100];
	int l1,l2,i,max;
	printf("Enter a string:");
	gets(a);
	printf("Enter a substring:");
	gets(b);
	
	l1=strlen(a);
	l2=strlen(b);
	max=l1-l2;
	
	for(i=0;i<=max;i++)
	if(strncmp(a+i,b,l2)==0)
	break;
	if(i<=max)
	printf("String found at index:%d",i);
	else 
	printf("Not found");
	
	return 0;
	
	
}
