#include<stdio.h>
void main()
{
	int tmp;
	printf("Input days temperature:");
	scanf("%d",&tmp);
	if(tmp<0)
	printf("freezing weather.\n");
	else if(tmp<10)
	printf("very cold weather.\n");
	else if(tmp<20)
	printf("cold weather.\n");
	else if(tmp<30)
	printf("normal weather.\n");
	else if(tmp<40)
	printf("Its Hot.\n");
	else
	printf("its very hot");

}