#include <stdio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("Sample.txt","w");
	printf("Enter a character:");
	scanf("%c",&ch);
	
	fputc(ch,fp);
	fclose(fp);
	
	fp=fopen("Sample.txt","r");
	ch=fgetc(fp);
	printf("File Contains",ch);
	fclose(fp); 
}
