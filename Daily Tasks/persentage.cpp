#include<stdio.h>
int main() {
	int pr;
	printf("enter percentage:");
	scanf("%d",&pr);

	if(pr>=90) 
	{
		printf("you got distinction");
	}
	 else if(pr>=75 && pr<=89)
	{
		printf("you got first class");	
	} 
	else if(pr>=60 && pr<=74) 
	{
		printf("you got second class");	
	}
	 else if(pr>=50 && pr<=59) 
	{
		printf("you got third class");
		
	}
	 else
	    printf("you are fail");
		return 0;
}