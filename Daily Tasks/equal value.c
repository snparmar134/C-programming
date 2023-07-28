#include<stdio.h>
int main()
{
	int value1, value2;
	printf("enter the value1=");
	scanf("%d",&value1);
	
	printf("enter the value2=");
	scanf("%d",&value2);
	
	if(value1==value2)
	{
		printf("value1 and value2 are equal");
	}
	else
	{
		printf("value1 and value2 is not equal");
	}
	return 0;
}
