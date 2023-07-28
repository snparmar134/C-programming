#include<stdio.h>
int main()
{
	int days, years, weeks;
	 printf("enter days:");
	 scanf("%d",&days);
	 
	 
	 years=(days/365);
	 weeks=(days%365)/7;
	 days=(days%365)%7;
	 printf("YEARS:%d\n",years);
	 printf("WEEKS:%d\n",weeks);
	 printf("DAYS:%d\n",days);
	 
	 return 0;
}