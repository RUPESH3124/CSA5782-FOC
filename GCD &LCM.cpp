#include<stdio.h>
int main()
{
	int num1,num2,lcm,gcd,numerator,denominator,remainder;
	printf("enter the two numbers:");
	scanf("%d %d",&num1,&num2);
	numerator=(num1>num2)?num1:num2;
	denominator=(num1<num2)?num1:num2;
	remainder=numerator%denominator;
	while (remainder!=0)
	{
		numerator=denominator;
		denominator=remainder;
		remainder=numerator%denominator;
	}
	gcd=denominator;
	lcm=num1*num2/gcd;
	printf("GCD of %d and %d is:\n ",gcd);
//	printf("LCM of %d and %d is:\n",lcm);
	return 0;
}