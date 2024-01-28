#include <stdio.h>
#include <stdlib.h>

//nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10
//có xh trong mảng hay ko
//IPO
//I: cần 10 biến
//P: Lôi từng biến ra hỏi value == 10 hok, có thì kết luận
//O in ra có hay ko

int main(int argc, char *argv[]) {
	int a[] = {1, 6, 100, 34, 1000, -11, 88, 0, 33, 10};
	int found = 0;	//giả bộ ban đầu 0 thấy 10 cho đến khi thấy em
					//thì a đổi trạng thái, biến sẽ giữ value cũ
					//cho đến khi bị thay đổi	
	
	for(int i = 0; i < 10; i++){
		if (a[i]== 10){
			found = 1; //chết nhen, bắt gặp em rồi, phất cờ lên, éo tìm nx
			
			break;//thoát sớm khi tìm thấy
		}
		
	}
	//kiểm tra cờ để in kq
	if (found == 0)
		printf("10 not found!!!");
	else
		printf("10 FOUND!!!!!!");
	//khi đã phất cờ thì coi như biến i đã dừng
	//mất lun vị trí biến i
	//CÓ CÁCH NÀO ĐỂ HIỆN CẢ VỊ TRÍ MÀ KH BỊ MẤT KHI BREAK; KO???
	
	
	//INTEGER LISTV4		
			
	return 0;
}