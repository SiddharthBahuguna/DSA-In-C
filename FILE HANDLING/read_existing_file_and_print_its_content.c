#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[10];
	FILE *fp;
	fp=fopen("Efile.txt","r");
	
	while(1)
	{
		fgets(str,15,fp);
		if(feof(fp))
		break;
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
