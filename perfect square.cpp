#include<stdio.h>
int main()
{
	int num,i=0;
	printf("enter the number:\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
	
	if(num==i*i)
	{
		printf("%d is perfect square:",num);
		return 0;
	}
}
	printf("%d is not a perfect square",num);
	return 0;
}