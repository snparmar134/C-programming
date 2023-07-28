#include<stdio.h>
int main()
{
	float pr;
	printf("enter the pr:");
	scanf("%f",&pr);
	if(pr<33.0)
	{
		printf("oops! you are fail");
	}
	else if(pr>=33.0 && pr<=40.0)
	{
		printf("you got D grade");
	}
	else if(pr>=41.0 && pr<=50.0)
	{
		printf("you got C grade");
	}
	else if(pr>=51.0 && pr<=60.0)
	{
		printf("you got B grade");
	}
	else if(pr>=61.0 && pr<=70.0)
	{
		printf("you got A grade");
	}
	else if(pr>=71.0 && pr<=80.0)
	{
		printf("you got A2 grade");
	}
	else
	{
		printf("congratulations! you got A1 grade");
	}
	return 0;
}