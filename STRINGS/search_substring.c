#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,flag=0,len1,len2;
	char str[100],substr[100];
	printf("Enter a string:");
	gets(str);
	printf("Enter a substring to be searched:");
	gets(substr);
	
	len1=strlen(str);
	len2=strlen(substr);
	
	for(i=0;i<=len1-len2;i++)
	{
		for(j=1;j<i+len2;j++)
		{
			flag=1;
			if(str[j]!=substr[j-1])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		break;
	}
	  if(flag==1)
	{
		printf("Search is Successful\n");
	}
	else
	{
		printf("Search is Not Successful\n");
	}
	return 0;
}
