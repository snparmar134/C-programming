#include<stdio.h>
int main() 
{
	char a,b,c,d,e,f,g,h,i,j,k;
	printf("1. clothing department\n");
	printf("2. food department\n");
	printf("3.cosmetic department\n");
	printf("choose any department\n");
	scanf("%d",&a);
	switch(a) 
	{
		case 1:
			printf("avlaible department\n");
			printf("a. mens wear\n");
			printf("b. womens wear\n");
			printf("c. kids wear\n");
			scanf("%s",&b);
			switch(b) 
			{
				case 'a':
					printf("avlaible department\n");
					printf("x.shirt\n");
					printf("y.pents\n");
					scanf("%c",&c);
					break;
				case 'b':
					printf("avlaible department\n");
					printf("x.tops\n");
					printf("y.skirts\n");
					scanf("%c",&d);
					break;
				case 'c':
					printf("avlaible department\n");
					printf("x.tshirt\n");
					printf("y.kepri\n");
					scanf("%c",&e);
					break;
			}
			break;
			{
			case 2:
				printf("a.southindian\n");
				printf("b.chinese\n");
				printf("c.italian\n");
				scanf("%s",&c);
				switch(c) 
				{
					case 'a':
						printf("avlailable department\n");
						printf("x.dosa\n");
						printf("y.idli\n");
						scanf("%c",&f);
						break;
					case 'b':
						printf("avlailable department\n");
						printf("x.fried rice\n");
						printf("y.manchurian\n");
						scanf("%c",&g);
						break;
					case 'c':
						printf("avlailable department\n");
						printf("x.pizza\n");
						printf("y.pasta\n");
						scanf("%c",&h);
						break;
				}
				break;
				{
				case 3:
					printf("a.lipstic\n");
					printf("b.nailpolish\n");
					printf("c.blusher\n");
					scanf("%s",&d);
					switch(d)

					{
						case 'a':
							printf("avlailable department\n");
							printf("x.red\n");
							printf("y.brown\n");
							scanf("%c",&i);
							break;
						case 'b':
							printf("avlailable department\n");
							printf("x.black\n");
							printf("y.blue\n");
							scanf("%c",&j);
							break;
						case 'c':
							printf("avlailable department\n");
							printf("x.golden\n");
							printf("y.pink\n");
							scanf("%c",&k);
							break;
					}
					break;
				}
			}
			break;
	}
}