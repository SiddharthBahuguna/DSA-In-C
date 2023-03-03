#include <stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void SelectionSort(int A[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(A[j]<A[k])
			k=j;
			
		}
		swap(&A[i],&A[k]);
	}
}
int main()
{
	int A[]={8,5,7,3,2},n=5,i;
	SelectionSort(A,n);
	
	for(i=0;i<5;i++)
	printf(" %d",A[i]);
	printf("\n");
	return 0;
}
