#include<stdio.h>
int main()
{
	int n,rev=0,r;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse num=%d",rev);
	return 0;
}