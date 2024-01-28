#include <stdio.h>
#include <stdlib.h>

//tính n giai thừa

//3! = 1*2*3
//5! = 1*2*3*4*5
//n! = 1  * 2  *   3  *...*n
//	   1   1*2    1*3  

int main(int argc, char *argv[]) {
	int n = 1; 
	int acc = 1;
	printf("Nhap n!: ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
		acc *= i;  //lúc i = 2 acc = 1 * 2, lúc i = 3 acc bằng 1*2 *3
	printf("\n");
	printf("%d", acc);
	
	
	
	return 0;
}