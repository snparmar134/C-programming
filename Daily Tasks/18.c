#include<stdio.h>
int main()
{
	float p,r,n,i;
	printf("p:");
	scanf("%f",&p);
	printf("r:");
	scanf("%f",&r);
    printf("n:");
	scanf("%f",&n);
	
	i=(p*r*n)/100;
	printf("interest=%f",i);
	return 0;
}