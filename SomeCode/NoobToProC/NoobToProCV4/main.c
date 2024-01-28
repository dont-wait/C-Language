#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

//IPO
//I:nhập x, n

//P: đưa vào x, for mỗi lần chạy số mũ sẽ thay đổi theo cthuc x^2n + 1

//O: in ra tổng


int main(int argc, char *argv[]) {
	
	int n, x, t, sum = 0;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("\n");
	printf("Nhap vao n mun tinh toi: ");
	scanf("%d", &n);
	t = pow (x, 2*n + 1);
	for (int i = 1; i <= n; i++)
	//	sum += (x*(2*n +1));
		sum += t;
	printf("Sum(%d) of value is %d",n , sum);
	
	
	return 0;
}