#include<stdio.h>
int main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
	return 0;
}