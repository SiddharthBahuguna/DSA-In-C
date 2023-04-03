#include <stdio.h>
int main()
{
	char str[50];
	FILE *fp;
	fp=fopen("Single_line.txt","w");
	printf("Enter a string:");
	gets(str);
	
	fputs(str,fp);
	fclose(fp);
	fp=fopen("Sinle_line.txt","r");
	fgets(str,30,fp);
	printf("File contains:%s",str);
	fclose(fp);
	return 0;
}
