#include<stdio.h>
int main()
{
	int sub1, sub2, sub3, sub4, sub5;
	float total,per;
	
	printf("enter marks of sub1:");
	scanf("%d",&sub1);
	
	printf("enter marks of sub2:");
	scanf("%d",&sub2);
	
	printf("enter marks of sub3:");
	scanf("%d",&sub3);
	
	printf("enter marks of sub4:");
	scanf("%d",&sub4);
	
	printf("enter marks of sub5:");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	per=(float)total/5;
	printf("total=%f\n",total);
	printf("percentage =%f\n",per);
	
	if(per>=80)
	{
		printf("you got distinction\n");
	}
	else if(per>=70)
	{
		printf("you got first class\n");
	}
	else if(per>=60)
	{
		printf("you got second class\n");
	}
	else if(per>=40)
	{
		printf("you got third class\n");
	}
	else
	{
		printf("you are fail\n");
	}
	return 0;
	
}