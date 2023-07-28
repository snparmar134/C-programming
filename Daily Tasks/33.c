#include<stdio.h>
int main()
{
	char ch;
	printf("anter any charecter:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("'%c' is uppercase alphabet.",&ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("'%c' is lowercase alphabet.",&ch);
	}
	else
	{
		printf("'%c' is not a alphabet",&ch);
	}
	return 0;
}