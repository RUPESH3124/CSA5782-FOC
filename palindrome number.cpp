#include<stdio.h>
int main()
{
	int num,sum=0,remainder,temp;
	printf("enter the value of num:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		remainder=num%10;
		sum=(sum*10)+remainder;
		num=num/10;
	}
	if(temp==sum)
	printf("palindrome");
	else
	printf("not a palindrome");
	return 0;
}