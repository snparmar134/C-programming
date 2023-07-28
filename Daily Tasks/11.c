#include<stdio.h>
int main()
{
	int num1,num2, division;
	printf("num1:");
	scanf("%d",&num1);
	printf("num2:");
	scanf("%d",&num2);
	division=num1/num2;
	printf("%d/%d=%d",num1,num2,division);
	return 0;
}