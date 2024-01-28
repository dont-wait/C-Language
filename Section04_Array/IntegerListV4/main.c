#include <stdio.h>
#include <stdlib.h>

//nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10
//có xh trong mảng hay ko
//IPO
//I: cần 10 biến
//P: Lôi từng biến ra hỏi value == 10 hok, có thì kết luận
//O in ra có hay ko

int main(int argc, char *argv[]) {
	int a[] = {1, 6, 100, 34, 10, -11, 88, 0, 33, 10};
	int found = 0;	//giả bộ ban đầu 0 thấy 10 cho đến khi thấy em
					//thì a đổi trạng thái, biến sẽ giữ value cũ
					//cho đến khi bị thay đổi	
	int position = 0;
	for(int i = 0; i < 10; i++){
		if (a[i]== 10){
			found = 1; //chết nhen, bắt gặp em rồi, phất cờ lên, éo tìm nx
			position = i;
			//break;//thoát sớm khi tìm thấy
		}			//chạy đến cúi, in số 10 xh cúi cùng
		
	}
	//kiểm tra cờ để in kq
	if (found == 0)
		printf("10 not found!!!");
	else
		printf("10 FOUND AT THE POSITION OF %d !!!!!!", (position + 1));
															//lừa đảo số thứ tự đếm từ 1
	
	
		
			
	return 0;
}