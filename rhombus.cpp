#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		k=i;
		if(k<0)
		k=k*-1;
		for(j=0;j<=n;j++)
		{
			if(k<=j)
			printf("*");
			else
			printf(" ");
			
		}
		printf("\n");
	}
	return 0;
}