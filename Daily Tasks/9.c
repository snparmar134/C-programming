#include<stdio.h>
int main()
{
	int num1,num2,sub;
	printf("enter first num:");
	scanf("%d",&num1);
	printf("enter second num:");
	scanf("%d",&num2);
	sub=num1-num2;
	printf("%d-%d=%d",num1,num2,sub);
	return 0;
}