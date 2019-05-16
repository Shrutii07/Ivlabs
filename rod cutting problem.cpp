#include<stdio.h>
#include<limits.h>

int rodcutting(int n,int price[])
{
	 int i,j,sum;
	 int m[n+1];
	 m[0]=0;
	 for(i=1;i<=n;i++)
	 { 	
	 	m[i]=INT_MIN;
	 	for(j=0;j<i;j++)
	 	{
	 		sum=price[j]+m[i-(j+1)];
	 		
	 		if(sum>m[i])
	 		m[i]=sum;
		 }
	 }
	 
	 return m[n];
}
int main()
{
	int n,max,i; 	
	printf("Enter the required length of rod");
	scanf("%d",&n);
	int price[n];
	printf("enter the prices of pieces of all rod length & enter 0 if not available ");
	for(i=0;i<n;i++)
	{scanf("%d",&price[i]);   //price[i]=price of i+1 element
	}   
	max=rodcutting(n,price);
	printf("the max profit is %d",max);
	return 0;
}
