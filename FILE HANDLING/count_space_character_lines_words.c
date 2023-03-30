#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c=0,space=0,word=0,line=0;
	char ch;
	FILE *fp;
	fp=fopen("pqr.txt","r");
	if(fp==NULL)
	{
		printf("File is unable to open");
		exit(1); 
	}
	while(ch=fgetch(fp))!=EOF)
	{
		c++;
		if(ch=='\n' || ch=='\0')
		line++;
		if(ch==' ' || ch=='\n' || ch=='\0')
		{
			word++;
		}
		if(ch==' ')
		space++;
	}
	if(c>0)
	{
		line++;
		word++;
	}
	printf("Total number of characters:%d\n",c);
	printf("Total number of lines:%d\n",line);
	printf("Total number of space:%d\n",space);
	printf("Total number of words:%d\n",word);
	fclose(fp);
	fgetch();
}
