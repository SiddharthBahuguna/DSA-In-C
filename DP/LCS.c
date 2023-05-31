#include <stdio.h>
int max(int a,int b){
    return (a > b) ? a : b;
}

int lcs(char* X,char* Y,int m,int n){
	if(m==0 || n==0) return 0;
	
	if(X[m-1]==Y[n-1])
	return 1+lcs(X,Y,m-1,n-1);
	
	else
	return max(lcs(X,Y,m,n-1),lcs(X,Y,m-1,n));
}


int main(){
	char s1[]="AGGTAB";
	char s2[]="GXTXAYB";
	
	int m=strlen(s1);
	int n=strlen(s2);
	
	printf("Length of LCS %d:",lcs(s1,s2,m,n));
}
