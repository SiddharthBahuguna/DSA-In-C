#include <stdio.h>
void main()
{
	int x;
	FILE *fp;
	fp=fopen("Sample.txt","w");
	
	if(fp==NULL)
	{
		printf("Opening Successfully");
		exit(0);
	}
	printf("Enter an integer:");
	scanf("%d",&x);
	fprintf(fp,"%d",x);
	fclose(fp);
	
	fp=fopen("Sample.txt","r");
	fscanf(fp,"%d",&x);
	printf("The file contains=%d",x);
	fclose(fp);
}

