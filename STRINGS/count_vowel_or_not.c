#include <stdio.h>
int main()
{
	char s[100];
	int i,count=0;
	printf("Enter a string:");
	scanf("%c",&s);
	
	for(i=0;i>0;i++)
	{
		if (s[i]=='A' || s[i]=='a' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
		{
			count++;
		}
		if count(s=0)
		{
			printf("No Vowel");
			
		}
		else
		printf("Vowels are",s,count);
	}
	return 0;
}

