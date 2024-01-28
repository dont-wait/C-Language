#include <stdio.h>
#include <stdlib.h>

// viết hàm tính tổng n !
//I nhập vào n

//P: thuật toán ốc bươu nhồi thịt
//tổng 5! = 1! + 2! +   3! +     4! +      5!
//			1  + 1*2	1*2*3   1*2*3*4    
//tao nhồi lần lượt từng con ốc bươu, mỗi con là 1 bài toán riêng
//sau đó ta ms đem hết vô nồi luộc
 
//O in ra tổng của n!
int getFactorial(int n);
int main(int argc, char *argv[]) {
	int n;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	//printf("%d", getFactorial(5));
	for (int i = 1; i <= n; i++)
		sum += getFactorial(i);

	printf("Sum of 1! to %d! = %d", n, sum);

	return 0;
}

int getFactorial(int n){
	int acc = 1;
	if (n == 0 || n == 1)
		acc = 1;
	else
		for(int i = 2; i <= n; i++)
			acc *= i;
	
	return acc;
	
			
	
}