#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char c;
	fptr1=fopen("xyz.txt","r");
	if(fptr1==NULL)
	{
		printf("File is unable to open");
		exit(1);
	}
	fptr2=fopen("Destination.txt","w");
	if(fptr2==NULL)
	{
		printf("File is unable to open");
		exit(1);
	}
	
	while((c=fgetc(fptr1))!=EOF)
	{
		fputc(c,fptr2);
	}
	printf("Data Successfully Copied");
	fclose(fptr1);
	fclose(fptr2);
}
