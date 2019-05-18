#include<stdio.h>
#include<limits.h>

int min(int a,int b)
{
	return(a<b?a:b);
}
int main()
{
	int a[100],n,i,j;
	printf("Enter no. of entries u wanna enter");
	scanf("%d",&n);
	printf("Enter nos.");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int jump[n];
	if(n<=1 || a[0]==0)
	{
		printf("Not possible to reach end or to jump");
	}
	else
	{jump[0]=0;
		for(i=1;i<n;i++)
		{jump[i]=INT_MAX;
			for(j=0;j<i;j++)
			{
				if(i<=j+a[j])
				{
					jump[i]=min(jump[i],jump[j]+1);
				}
			}
		}
		printf("min jumps required r %d  \n",jump[n-1]);
		for(i=0;i<n;i++)
		{
			if(jump[i]!=jump[i+1])
			{
				printf("%d =>",a[i]);
			}
		}
	}
	return 0;
}
