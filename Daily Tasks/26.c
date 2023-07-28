#include<stdio.h>
int main()
{
	char name[30],address[30];
	int birthdate,age;
	printf("enter your name:");
	scanf("%s",&name);
	
	printf("enter your birthdate:");
	scanf("%d",&birthdate);
	
	printf("enter your age:");
	scanf("%d",&age);
	
	printf("enter your address:");
	scanf("%s",&address);
	
	printf("your name=%s\n your birthdate=%d\n your age=%d\n your address=%s\n",name, birthdate,age,address);
	
	return 0;
}