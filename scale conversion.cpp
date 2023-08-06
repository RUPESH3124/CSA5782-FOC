#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("enter the temperature in degrees:");
	scanf("%d",&a);
	b=(a*1.8)+32;
	printf("fahrenheat is:%1f",b);
	return 0;
}