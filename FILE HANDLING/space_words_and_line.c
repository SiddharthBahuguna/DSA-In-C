#include<stdio.h>
#include <stdlib.h>
int main()
{
	int line=1,words=0,space=0;
	char ch,a,d;
	FILE *fp;
	fp=fopen("swl.txt","w");
	
	printf("Write a paragraph and press CTRL + Z");
	while((ch=getchar())!=EOF)
	{
		fprintf(fp,"%c",ch);
	}
	fclose(fp);
	
	fp=fopen("swl.txt","r");
	
	while(!feof(fp))
	{
		fscanf(fp,"%c",&a);
		
		if(a=='\n')
		line++;
		else if(a==' ')
		space++;
		else
		words++;
	}
	
	fclose(fp);
	printf("Space:%d",space);
	printf("\nWords:%d",words);
	printf("\nLine:%d",line);
	
	return 0;
}
