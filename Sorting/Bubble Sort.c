#include <stdio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void Bubble(int A[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			swap(&A[j],&A[j+1]);
		}
	}
}
int main()
{
	int A[]={8,5,7,3,2},n=5,i;
	Bubble(A,5);
	
	for(i=0;i<5;i++)
	printf(" %d",A[i]);
	printf("\n");
	
	return 0;
}
