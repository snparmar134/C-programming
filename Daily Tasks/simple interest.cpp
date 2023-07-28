#include<stdio.h>
int main()
{
	float amountP, timeN, rateR, SI;
	printf("enter amount:");
	scanf("%f",&amountP);
	
	printf("enter amount:");
	scanf("%f",&timeN);
	
	printf("enter amount");
	scanf("%f",&rateR);
	
	SI=(amountP*timeN*rateR)/100;
	printf("simple interest %f",SI);
	
	return 0;
	
}