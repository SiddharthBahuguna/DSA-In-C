#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int count=0;
	char ch;
	fp=fopen("Lines.txt","r");
	if(fp==NULL)
	{
		printf("File is unable to open");
		exit(1);
	}
	
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
	}
	printf("Number of lines are:%d",count);
	fclose(fp);
}
