#include<stdio.h>
int main()
{
	int value1,value2,multiplication;
	printf("enter first number:");
	scanf("%d",&value1);
	printf("enter second number:");
	scanf("%d",&value2);
	multiplication=value1*value2;
	printf("%d*%d=%d",value1,value2,multiplication);
	return 0;
}