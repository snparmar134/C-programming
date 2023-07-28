#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("you are to young for this exam");
	}
	else if(age>=18 && age<=32)
	{
		printf("you are eligible for govt exam");
	}
	else
	{
		printf("you are not eligible for govt exam");
	}
	return 0;
}