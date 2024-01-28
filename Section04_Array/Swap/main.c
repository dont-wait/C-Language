#include <stdio.h>
#include <stdlib.h>

//hoán đổi giá trị cho 2 biến cho nhau !!!

int main(int argc, char *argv[]) {
	int a =23;
	int b = 100;
	printf("Before swaping a = %d, b = %d\n", a, b);
	a = b;//tao đưa m
	// a= b= 100, a=100
	b = a;//m đưa tao
	//b= 100; a = 100
	//b phải lấy giá trị cũ của a , a ngày xưa á
	//a ngày xưa 23// 23 bị mất do câu lệnh a = b
	// cất cũ khi đi chơi với ngừi mới 
	//A cũ, A23 đã đi ròi
	// trong máy chỉ lưu đc 1 value trong 1 lần
	
	printf("After swaping a = %d, b = %d\n", a, b);
	
	return 0;
}