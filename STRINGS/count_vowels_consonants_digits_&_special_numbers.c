#include <stdio.h>
int main()
{
	int i,vowel=0,consonant=0,special=0,letters=0,digits=0;
	char str[100];
	printf("Enter a string:");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
		{
			vowel++;
		}
		
		else if (str[i]>=0 && str<=47 || str[i]>58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=127)
		{
			special++;
		}
		
		else if (str[i]>'0' && str[i]<'9')
		{
			digits++;
		}
	}
	printf("Vowels count=%d\n",vowel);
	printf("Consonant count=%d\n",strlen(str)-vowel-special-digits);
	printf("Digits count=%d\n",digits);
	printf("Special Characters=%d\n",special);
	return 0;
}
