#include<stdio.h>
int main()
{
	int value1,value2,division;
	printf("enter first value:");
	scanf("%d",&value1);
	printf("enter second value:");
	scanf("%d",&value2);
	division=value1/value2;
	printf("%d/%d=%d",value1,value2,division);
	return 0;
}