#include <stdio.h>
#include <stdlib.h>
main()
{
	FILE *file1,*file2;
	char c;
	int tabs=0,lines=0,spaces=0,characters=0;
	file1=fopen("file7.txt","r");
	
	if(file1==NULL)
	{
		printf("File 1 not founded\n");
		exit(0);
	}
	file2=fopen("file8.txt","w");
	if(file2==NULL)
	{
		printf("File 2 is not founded\n");
		exit(0);
	}
	
	while(1)
	{
		c=fgetc(file1);
		if(c!=EOF)
		{
			fputc(c,file2);
		}
		else
		break;
	}
	fclose(file1);
	fclose(file2);
}
