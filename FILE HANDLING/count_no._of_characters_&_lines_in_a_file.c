#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	int noc=0,nol=0,not=0,nos=0;
	FILE *fp;
	fp=fopen("Count.txt","w");
	if(fp==NULL)
	{
		printf("File opening unsuccessful");
		exit(0);
	}
	while(1)
	{
		ch=getchar();
		if(ch==EOF)
		break;
		fputc(ch,fp);
	}
	fclose(fp);
	fp=fopen("Count.txt","r");
	
	while(ch=fgetc(fp)!=EOF)
	{
		noc++;
		if(ch==' ')
		nos++;
		if(ch=='\n')
		nol++;
		if(ch=='\t')
		not++;
	}
	fclose(fp);
	printf("Number of characters are:%d",noc);
	printf("Number of lines are:%d",nol);
	printf("Number of tabs are:%d",not);
	printf("Number of spaces are:%d",nos);
	
	return 0;
}
