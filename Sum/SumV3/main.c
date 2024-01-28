#include <stdio.h>
#include <stdlib.h>

/* Tính tổng số n nhập vào */
//IPO
//I: nhập n số muốn +
//P:y chang V2: lấy tổng số trc cộng típ vào số tiếp theo, cứ v tới n
//O: in ra tổng số n
int main(int argc, char *argv[]) {
	int n, sum;
	sum =0;
	printf("This program will show you Sum of n\n");
	printf("Please input n you want calculate:");
	scanf("%d", &n);
	for (int i= 1; i <=n; i++)
		sum+=i;
	printf("Sum of %d numbers is:%d", n, sum);
	return 0;   
}