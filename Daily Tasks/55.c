#include<stdio.h>
int main()
{
	int i,n,a=0;
	printf("enter number:");
	scanf("%d",&n);
	
	if(n==0||n==1){
	
	a=1;
}
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	}
	if(a==0)
	{
		printf("%d  is prime num",n);
	}
	else
	{
		printf("%d is non prime num",n);
	}
	return 0;
	
}