#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char fL;
	printf("Input the 1st Letter of your first name:");
	scanf("%c",fL);
	printf("You has just input the character:%c\n",fL);
	fL += 32;
	printf("And it is converted to lower case as %c\n",fL);	


	return 0;
}
