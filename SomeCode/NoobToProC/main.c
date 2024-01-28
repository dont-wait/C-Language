#include <stdio.h>
#include <stdlib.h>

//Tính tổng S(n) = 1 + 1/2 + 1/3 + ... + 1/n
//IPO

//I quá rõ ròi

//P:chạy vòng lặp, mỗi lần tăng mẫu 1 nhát rồi cộng cho số típ theo
// mẫu của số tiếp theo cx tăng 1 nhát

//O: in ra tổng


int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	float sum = 0;
	for(int i = 1; i <= n; i++)
		sum += 1.0/i;
	printf("Sum of 1+ 1/2 +... +1/%d is: %.2f", n, sum);
	
	
	return 0;
}	
