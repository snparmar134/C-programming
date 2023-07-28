#include<stdio.h>
int main() {
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);

	if(num1!=num2) 
	{
		printf("num1 is not equal to num2\n");
		if(num1>num2) 
		{
			printf("num 1 is max");
		} 
	    else 
	    {
		    printf("num2 is max");
	    }
    }
	else 
	{
		printf("num1 and num2 equal");
	}
	return 0;
}