#include<stdio.h>
int main() {
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if(ch >='A'&& ch <='Z')
	{
		printf("'%C',is uppercase alphabet.",ch);
	}

	else if (ch >= 'a' && ch <='z')

	{
		printf("'%c',is lowercase alphabet.",ch);
	}
	 else
	{
	    printf("'%c',is not an alphabet.",ch);
    }
	return 0;
}