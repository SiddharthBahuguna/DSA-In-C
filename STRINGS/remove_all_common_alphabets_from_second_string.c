#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,flag=0,len1,len2,j,k=0;
	char str1[100],str2[100],temp[100];
	printf("Enter string 1\n");
	gets(str1);
	printf("Enter string 2\n");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0;i<len2;i++)
	{
		flag=0;
		for(j=0;j<len1;j++)
		{
			if(str2[i]==str1[j])
			{
				flag=1;
			}
		}
		if(flag==0){
			temp[k]=str2[i];
			k++;
		}
	}
	temp[i]='\0';
	printf("After removing common alphabets from string 2=%s\n",temp);
	return 0;
}
