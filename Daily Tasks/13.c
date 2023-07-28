#include<stdio.h>
int main()
{
	float area,radius,PI=3.14;
	printf("enter radius:");
	scanf("%f",&radius);
	
	area=PI*radius*radius;
	printf("area of circle=%f",area);
	return 0;
}