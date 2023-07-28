#include<stdio.h>
int main() 
{
	char ch;
	printf("enter the word=");
	scanf("%c",&ch);

	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
	{
	    printf("word is vowel");
    } 
	    else 
	{

        printf("word is consonant");
    }
        return 0;
}
