#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	printf("enter num1,num2,num3,num4,num5 value:");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	
	if(num1>num2 && num1>num3 && num1>num4 && num1>num5)
	{
		printf("num1 is max");
	}
	else if(num2>num3 && num2>num4 && num2>num5)
	{
		printf("num2 is max");
	}
	else if (num3>num4 && num3>num5)
	{
	    printf("num3 is max");	
	}
	else if(num4>num5)
	{
		printf("num4 is max");
	}
	else
	{
		printf("num5 is max");
	}
	return 0;
}