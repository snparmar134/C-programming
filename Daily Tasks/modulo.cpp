#include<stdio.h>
int main ()
{
	int value1,value2,modulo;
	printf("enter first value:");
	scanf("%d",&value1);
	printf("enter second value:");
	scanf("%d",&value2);
	modulo=value1%value2;
	printf("%d %% %d=%d",value1,value2,modulo);
	return 0;	
}