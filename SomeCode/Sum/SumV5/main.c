#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fV1();
int main(int argc, char *argv[]) {
	//for (int i=1; i<=10; i++)
	do{
		fV1();
	  }while ( 45 < 99);
	return 0;
}
void fV1(){
	int n, acc;
	acc =0;
	printf("\nThis program will show you Sum of n\n");
	printf("Please input n you want calculate:");
	scanf("%d", &n);
		if (n <= 100)
			{
			for (int i= 1; i <=n; i++)
				acc+=i;
			printf("Sum of %d numbers is:%d\n", n, acc);
			}
		else
			printf("Do u know an integer numbers?\n");
	
		

}