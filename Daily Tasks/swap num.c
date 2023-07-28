#include<stdio.h>
int main()
{
	int first,second,a;
	printf("enter first num:");
	scanf("%d",&first);
	printf("enter second num:");
	scanf("%d",&second);
	
	a=first;
	first=second;
	second=a;
	
	printf("\nafter swaping first num:%d\n",first);
	printf("after swaping second num:%d",second);
	return 0;
}