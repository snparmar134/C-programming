#include<stdio.h>
int main()
{
	int num1,num2,multiplication;
	printf("enter first num:");
	scanf("%d",&num1);
	printf("enter second num:");
	scanf("%d",&num2);
	multiplication=num1*num2;
	printf("%d*%d=%d",num1,num2,multiplication);
	return 0;
}