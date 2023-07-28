#include<stdio.h>
int main()
{
	int num1,num2,modulo;
	printf("num1:");
	scanf("%d",&num1);
	printf("num2:");
	scanf("%d",&num2);
	modulo=num1%num2;
	printf("%d %% %d=%d",num1,num2,modulo);
	return 0;
}