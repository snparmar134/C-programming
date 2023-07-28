#include<stdio.h>
int main()
{
	char Name,Address;
	int Birthdate,Age;
	
	printf("enter your Name=");
	scanf("%s",&Name);
	
	printf("enter your Birthdate=");
	scanf("%d",&Birthdate);
	
	printf("enter your Age=");
	scanf("%d",&Age);
	
	printf("enter your Address=");
	scanf("%s",&Address);
	
	printf("%s\n, %d\n, %d\n, %s\n",Name,Birthdate,Age,Address);
	return 0;
}
