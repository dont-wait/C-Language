#include <stdio.h>
#include <stdlib.h>

//LẬP BẢNG CỬU CHƯƠNG 
//IPO
//I: Nhập vào bảng cửu chương mún in
//P: số vừa nhập * i tăng từng nhát cho tới 10
//O: bảng cửu chưởng 



int main(int argc, char *argv[]) {
	int n ;
	int nbandau;
	printf("Moi ban nhap bang cuu chuong mun in: ");
	scanf("%d", &nbandau);
	printf("\n");
	for(int i = 1; i <= 10; i++)
	{	
		n = nbandau;
		n *= i;
		printf("%d * %d = %d\n", nbandau, i, n);	
		}
	printf("\n");
	printf("CODE FOR FUN, CODE FOR FOOD, COOD FOR LEARN");	
	
	return 0;
}