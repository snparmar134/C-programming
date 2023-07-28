#include<stdio.h>
int main() 
{
	int num1,num2,num3;
	printf("enter first num:");
	scanf("%d",&num1);
	printf("enter second num:");
	scanf("%d",&num2);
	printf("enter third num:");
	scanf("%d",&num3);
	if(num1>num2) 
	{
		if(num1>num3) 
		{
			printf("num1 is Max");
		} 
		else 
		{
			printf("num3 is Max");
		}
	}
	else 
	{

		if(num2>num3)
			{
				printf("num2 is Max");
			}
	else
			{
			printf("num3 is Max");
		    }

	}
	return 0;
}