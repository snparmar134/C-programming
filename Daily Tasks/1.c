#include<stdio.h>
int main()
{
	float radius,PI=3.14,area;
	printf("enter first value:");
	scanf("%f",&radius);
	
	area=PI*radius*radius;
	printf("area of circle:%f",area);
	return 0;
}