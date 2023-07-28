#include<stdio.h>
int main()
{
	int temp;
	printf("enter days temprature:");
	scanf("%d",&temp);
	
	if(temp<0)
	printf("weather is frezzing");
	else if(temp<10)
	printf("weather is very cold");
	else if(temp<20)
	printf("weather is cold");
	else if(temp<30)
	printf("weather is normal");
	else if(temp<40)
	printf("weather is hot");
	else
	printf("weather is very hot");
	
}