#include <stdio.h>
int max(int a,int b){
	return (a>b)?a:b; //return max value that can be put
}
int knapsack(int W,int wt[],int val[],int n){
	if(n==0 || W==0)  //if weight of nth item is more than knapsack capacity W,than it can't be included
	return 0;

if (wt[n-1]>W)
return knapsack(W,wt,val,n-1);

else
return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
}

int main(){
	int profit[]={1,2,5,6};
	int weight[]={2,3,4,5};
	int W=8;
	
	int n=sizeof(profit)/sizeof(profit[0]);
	printf("%d",knapsack(W,weight,profit,n));//8
}
