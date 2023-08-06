#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("enter the first string:");
	scanf("%s",str1);
	printf("enter the second string:");
	scanf("%s",str2);
	int value=strcmp(str1,str2);
	if (value==0)
	printf("strings are same");
	else
	printf("strings are not same");
	return 0;
}