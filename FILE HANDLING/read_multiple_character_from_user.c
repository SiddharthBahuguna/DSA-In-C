#include <stdio.h>
int main()
{
	char ch;
	FILE *f;
	f=fopen("Sample.txt","w");
	printf("Enter multiple characters & press Crtl+Z to stop");
	
	while(1)
	{
		ch=getchar();
		if(f==EOF)
		break;
		else
		fputc(ch,f);
	}
	fclose(f);
	f=fopen("Sample.txt","r");
	printf("Your file contains");
	
	while(1)
	{
		ch=fgetchar();
		if(f==EOF)
		break;
		else
		printf("%c",ch);
	}
	fclose(f);
}
