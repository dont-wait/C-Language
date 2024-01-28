#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Choice, a, b;
	printf("This contruction will show you another program basic C\n");
	printf("1.Say hello\n");
	printf("2.Say hello again\n");
	printf("3.Print your input integer\n");
	printf("4.Basic Math\n");
	printf("5.Print 10 int\n");
	printf("6.Quit\n");
	printf("Please choose 1..6\n");
	printf("Your choice:");
	scanf("%d",Choice);
	switch(Choice)
	{
	
		case 1:
			printf("Welcome you to C Language\n");
			break;
		case 2:
			printf("Hello\n");
			printf("This is first C show\n");
			printf("Please Enter to stop\n");
			break;
		case 3:
			printf("This program will show your integer's'input\n");
			printf("Please input one integer\n");
			printf("This integer:");
			scanf("%d");
			break;
		case 4:
			printf("This program will show you +-*/\n");
			printf("Please input two integers\n");
			printf("I will show you the result\n");
			printf("Your input:");
			scanf("%d%d", a, b, (a+b), (a-b), (a*b),(a/b));
			break;
		/*case 5:
			For ( int i = 1; i<=10; i++)
					printf("%d",i);
			break;*/
		
	}		
	
	
	
	return 0;
}
