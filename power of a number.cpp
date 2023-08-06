#include<stdio.h>
int main()
{
	int base,exponent;
	int result=1;
	printf("enter the exponent value");
	scanf("%d",&exponent);
	printf("enter the base value");
	scanf("%d",&base);
	for(exponent;exponent>0;exponent--)
	{
		result=result*base;
	}
	printf("answer=%d",result);
	return 0;
}