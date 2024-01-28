#include <stdio.h>
#include <stdlib.h>

//BÀ CON GIỮA MẢNG VÀ CON TRỎ
//MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ ĐÓ BÀ CON
//TRUYỀN THAM CHIẾU, MẢNG/CON TRỎ LÀ ĐẦU VÀO CỦA HÀM
//Lưu và in ra mảng 10 con số nguyên bất kì

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, -15, 20, -25};
	//MẢNG LÀ khai báo nhiều biến cùng lúc, cùng kiểu, cùng tên
	//ở sát nhau!!!
	
	for(int i = 0; i < 5; i++)	
		printf("The address of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	//các nhà in cách nhau 4, ước dì dùng con trỏ ++ -- leo	qua
	//xem các value
	
	int *hari = &a[0];	//tui trỏ vào thg đầu dãy dc hok, lưu danh bạ
						//số nhà của biến đầu mảng!!!
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", hari);
	
	printf("a[1] = %d\n", a[1]);
	hari ++; //nhảy 1 căn nhà, int* nhảy 4byte sang nhà kế
	printf("a[1] = %d\n", *hari);
	
	//++ rồi in * đi hết mảng, sao ko for
	
	hari = &a[0]; //reset con trỏ, con trỏ trở về đầu mảng 
	
	//IN CẢ MẢNG CHO NGON
	printf("The array has value:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
	
	//hari vẫn chốt đầu mảng
	//lấy tọa độ rồi + i, rồi cho tọa độ vào đó, in đi value gốc
	//tao vẫn chốt đầu mảng
	
	//biến con trỏ + thì là có địa chỉ ms
	//vào địa chỉ ms *(của con trỏ + )
	//con trỏ vẫn chốt, mà vẫn duyệt đc mảng!!!
	
		
	return 0;
}