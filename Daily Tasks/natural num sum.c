#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input value:");
	scanf("%d",&n);
	printf("\n the first %d natural number are:\n",n);
	for(i=1; i<=n; i++)
	{
	
	printf("%d",i);
	{
    sum += i;	
    }
	}
	printf("\n The sum of natural numbers are%d=%d\n",n,sum);
	return 0;
}