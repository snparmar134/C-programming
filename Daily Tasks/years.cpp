#include<stdio.h>
int main()
{
	int days,weeks,years;
	 printf("enter years:");
	 scanf("%d",&years);
	 
	 days=years*365;
	 weeks=years*52;
	 printf("DAYS:%d\n",days);
	 printf("WEEKS:%d\n",weeks);
	 return 0;
}