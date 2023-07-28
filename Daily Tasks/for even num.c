#include<stdio.h>
int main()
{
	int i,n;
	printf("print even num till:");
	scanf("%d",&n);
	for(i=0; i<=n; i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
	
}