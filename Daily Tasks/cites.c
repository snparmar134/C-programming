#include<stdio.h>
int main() {
	char a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	printf("1.india\n");
	printf("2.uk\n");
	printf("3.us\n");
	printf("4.canada\n");
	printf("choose any country:\n");
	scanf("%d",&a);
	switch(a) {
		case 1:
			printf("a.gujarat\n");
			printf("b.maharashtra\n");
			printf("c.rajasthan\n");
			printf("choose any state:\n");
			scanf("%s",&b);
			switch(b) {
				case 'a':
					printf("x.ahemdabad\n");
					printf("y.rajkot\n");
					printf("z.surat\n");
					scanf("%c",&c);
					break;

				case 'b':
					printf("x.mumbai\n");
					printf("y.puna\n");
					printf("z.nagpur\n");
					scanf("%c",&d);
					break;

				case 'c':
					printf("x.jaipur\n");
					printf("y.udaipur\n");
					printf("z.ajmer\n");
					scanf("%c",&e);
					break;

			}
			break;

			{
		case 2:
				printf("a.england\n");
				printf("b.scotland\n");
				printf("c.wales\n");
				printf("choose any state:\n");
				scanf("%s",&c);
				switch(c) {
					case 'a':
						printf("x.birmingham\n");
						printf("y.manchester\n");
						printf("z.cambridge\n");
						scanf("%c",&f);
						break;

					case 'b':
						printf("x.dundee\n");
						printf("y.dunfermline\n");
						printf("z.glasgow\n");
						scanf("%c",&g);
						break;

					case 'c':
						printf("x.newport\n");
						printf("y.st asaph\n");
						printf("z.st davids\n");
						scanf("%c",&h);
						break;
				}
				break;
			}
			{
			case 3:
				printf("a.california\n");
				printf("b.texas\n");
				printf("c.florida\n");
				printf("choose any state:\n");
				scanf("%s",&d);
				switch(d) {
					case 'a':
						printf("x.los angeles\n");
						printf("y.san francisco\n");
						printf("z.oakland\n");
						scanf("%c",i);
						break;

					case 'b':
						printf("x.houston\n");
						printf("y.dallas\n");
						printf("z.austin\n");
						scanf("%c",j);
						break;

					case 'c':
						printf("x.orlando\n");
						printf("y.miami\n");
						printf("z.tampa\n");
						scanf("%c",k);
						break;
				}
				break;
			}
			{
			case 4:
				printf("a.quebec\n");
				printf("b.ontario\n");
				printf("c.alberta\n");
				printf("choose any state:\n");
				scanf("%s",&e);
				switch(e) {
					case 'a':
						printf("x.montreal\n");
						printf("y.gatineau\n");
						printf("z.sherbrooke\n");
						scanf("%c",l);
						break;

					case 'b':
						printf("x.toronto\n");
						printf("y.ottawa\n");
						printf("z.hamilton\n");
						scanf("%c",m);
						break;

					case 'c':
						printf("x.calgry\n");
						printf("y.edmonton\n");
						printf("z.red deer\n");
						scanf("%c",n);
						break;
				}
				break;
			}
			break;
	}
}