#include<stdio.h>
int main()
{
	int i;
	for(i=1; i<=10; i++)
	printf("%d\n",i);
	//scanf("%d\n",&i);
	//for(i=0; i<=10; i++)
    for(i=1;i<=10;i+=2)
	if(i%2==0)
	{
		printf("even num\n",i);
    }
		else
	{
			printf("odd num\n",i);
	}	
	return 0;
}