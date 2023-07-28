#include<stdio.h>
int main()
{
	char ch;
	float a,b,c;
	
	printf("please select operator:");
	scanf("%c",&ch);
	
	printf("enter first num:");
	scanf("%f",&a);
	
	printf("enter second num:");
	scanf("%f",&b);
	
	switch(ch)
	{
		case'+':c=a+b;
		   printf("sum of two num:%f",c);
		   break;
		   
		case'-':c=a-b;
		   printf("sub of two num:%f",c);
		   break;
		   
		case'*':c=a*b;
		   printf("multiply of two num:%f",c);
		   break;
		   
		case'/':c=a/b;
		   printf("division of two num:%f",c);
		   break;      
		   
    }
    return 0;
}