#include <stdio.h>
#include <stdlib.h>

/* Tính tổng 100 số tự nhiên */
//IPO
//I:cho sẵn rồi 100 số đó, cần mịa dì nhập
//P:Thuật toán tích con heo đất
// 1  2  3  4 sum=1
// t1+ t3+	t6+4....+100
//O: in ra tổng
int main(int argc, char *argv[]) {
	int sum =0;
	for (int i = 1; i <= 100; i++)
		sum+=i;
	printf ("Sum of 100 number is %d", sum);
	return 0;
}