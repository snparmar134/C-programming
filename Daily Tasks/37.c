#include<stdio.h>
int main()
{
	char ch;
	printf("enter F for female, M for male, O for other= ");
	scanf("%c",&ch);
	if(ch=='F' || ch=='f')
	{
		printf("your gender is Female");
	}
	else if(ch=='M' || ch=='m')
	{
		printf("your gender is Male");
	}
	else if(ch=='O' || ch=='o')
	{
		printf("your gender is Others");
	}
	else
	{
		printf("please give the right inpute");
	}
	return 0;
}