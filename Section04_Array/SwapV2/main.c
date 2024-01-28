#include <stdio.h>
#include <stdlib.h>

//hoán đổi giá trị cho 2 biến cho nhau !!!

int main(int argc, char *argv[]) {
	int a =23;
	int b = 100;
	int tmp; // t, tmp, temp, temperary - biến trung gian, biến tạm
	printf("Before swaping a = %d, b = %d\n", a, b);
	tmp = a; // cất lại 23 trước khi a đi chơi với ngừi mới
	a = b; 	 // a lấy 100 của b, mất 23, ko lo, t giữ , đẩy cho b sau
	b = tmp; // b lấy cũ của a đg nằm ở t 23
	
	printf("After swaping a = %d, b = %d\n", a, b);
	
	return 0;
}