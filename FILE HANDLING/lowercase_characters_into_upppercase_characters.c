#include <stdio.h>
#include <conio.h>
int main(int arg,char *argv[])
{
	FILE *fp1,*fp2;
	char ch;
	if(arg!=3)
	{
		printf("Full information is not provided");
		return 0;
	}
	fp1=fopen(argv[1],"r");
	if(f1==NULL)
	{
		printf("Opening Unsuccessful");
		return 0;
	}
	fp2=fopen(argv[2],"w");
	if(fp==NULL)
	{
		printf("Opening Unsuccesssful");
		return 0;
	}
	while(feof(fp1)==0)
	{
		fscanf(fp1,"%c",&ch);
		fprintf(fp2,"%c",ch-32);
	}
	fcloseall();
	
	printf("\n File copied with uppper case characters:");
	return 0;
}
