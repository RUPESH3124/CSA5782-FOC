#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	
	if(pow((int)sqrt(n),2)==n)
	{
	printf("perfect square");
    }
	else
	{
	printf("% not a perfect square");
    }
	return 0;
}