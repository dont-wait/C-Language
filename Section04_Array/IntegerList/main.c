#include <stdio.h>
#include <stdlib.h>

//nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10
//có xh trong mảng hay ko
//IPO
//I: cần 10 biến
//P: Lôi từng biến ra hỏi value == 10 hok, có thì kết luận
//O in ra có hay ko

int main(int argc, char *argv[]) {
	int a[] = {5, 6, 100, 34, 1000, -11, 88, 0, 33, 10};
	//nên nhớ ta có đến 10 biến lận a[0] ...
	//					bình đẳng mọi biến int khác int yob;
	//duyệt mảng, quét từ đầu đến cuối
	for(int i = 0; i < 10; i++)
		if (a[i]== 10)
			printf("Hey, Found 10 at position of %d\n", i);
		else
			printf("Hey, 10 not found in the array\n");	
	return 0;
}