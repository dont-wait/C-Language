#include <stdio.h>
#include <stdlib.h>

//viết hàm hoán đổi 2 value!!!a = 10, b = 100
//							  a= 100, b = 10		
void swapV1(int a, int b);

int main(int argc, char *argv[]) {
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d, b = %d\n", a, b);
	swapV1(a, b);
	printf("In main(), after swapping, a = %d, b = %d\n", a, b);
	return 0;
}
//TRUYỀN THAM TRỊ, ĐỔI A, B TRONG HÀM, ĐÂU CÓ ĐỔI BÊN MAIN()
void swapV1(int a, int b){
	printf("Before swapping, a = %d, b = %d\n", a, b);
	int t;
	t = a; //biến trung gian lưu giá trị cữ trước khi đi với ngừi mới
	a = b;
	b = t; // b = ngừi cũ
	printf("After swapping, a = %d, b = %d\n", a, b);
}