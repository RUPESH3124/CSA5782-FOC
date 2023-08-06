#include<stdio.h>
int factorial();
{
	int factorial(int i)
{
	
	if(i<=1)

	return 1;
}
    return i*factorial (i-1);
}
int main()
{
	int i=5;
	printf("%d",factorial(i));
	return 0;
}