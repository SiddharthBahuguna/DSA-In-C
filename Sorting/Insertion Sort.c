#include <stdio.h>
void Insertion(int A[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=A[i];
		while(j>-1 && A[j]>x)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}

int main()
{
	int A[]={8,5,7,3,2},n=5,i;
	Insertion(A,n);
	
	for(i=0;i<5;i++)
	printf(" %d",A[i]);
	printf("\n");
	
	return 0;
}
