#include<stdio.h>
#include<stdlib.h>
int main()
{   
    char str[25];
	FILE *fp;
	fp=fopen("Seek.txt","w");
	fputs("I am a student of GEU",fp);
	fseek(fp,17,SEEK_SET);
	fputs("GEHU",fp); 
	fclose(fp);
	return 0;
	
}
