#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("character is vowel");
	}
	else
	{
		printf("character is consonant");
	}
	return 0;
}