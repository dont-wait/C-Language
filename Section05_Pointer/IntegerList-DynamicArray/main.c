#include <stdio.h>
#include <stdlib.h>

//viết đoạn code lưu thông tin của 5 con số nguyên
//viết hàm lưu mảng 5 con số nguyên và in ra 

void printIntegerList();

//phiên bản oanh tạc tự do, xin vùng ram khai phá, HEAP
//xin ram ếu phải khai báo biến !!!
//xin ram để lưu dữ liệu kiểu, ko cần đặt tên vùng ram, biến như bên stack
//vùng HEAP gọi là vùng nhớ biến động - dynamic - vùng nhớ OBJECT của OOP

//vùng STACK Window quản lí cực chặt chẽ - hoạt động theo nguyên tắc
//LIFO LAST IN FIRST OUT
//HÀM VỪA CHẠY XOG, NÓ HỦY NGAY CÁC BIẾN LOCAL

void printIntegerListHEAP();
void printIntegerListHEAPV2();

int main(int argc, char *argv[]) {
	//printIntegerList();
	printIntegerListHEAPV2();
	return 0;
}

void printIntegerList() {
	int a[] = {5, -10, 15, -20, 25, 30}; // 5 biến * 4byte nằm trong stack
	//local array, mảng nằm trong  STACK, 6 biến int nằm trong STACK
	printf("The array has value of\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", *(a + i));
	printf("\n"); //sống có trách nhiệm, xuống hàng sau khi in
}
void printIntegerListHEAP() {
	int* p; //pointer, em là cái hộp, biến, em sẽ lưu giá trị đb
			//em trỏ cái ví nào đó, biến int thường nào đó
			//em sẽ lưu tọa độ của 1 biến int khác = &bien-int-khac;
			//đưa cho em 1 địa chỉ nào đó đi, &ten-bien-int-khac
			
			//		(int*)địa-chỉ-nào-đó (int*)6M;
			
			//p nằm trong STACK, khai báo trong hàm là nằm STACK
			//VẤN ĐỀ TAO MÚN TRỎ ĐẾN HEAP, LÊN HEAP
			
	int tt = 5000;
	//p = &tt;	//trỏ quanh quẩn trong STACK
	
	//p = (int*)malloc(số-byte-mún-xin);
			
	//				nên xin bội số của data type mà con trỏ đg trỏ
	
	p = (int*)malloc(20); //20 byte đã đc cấp cho con trỏ int		
	//hàm trả về tọa độ của byte đầu tin trong 20 byte đã xin!!!
	//hàm trả về địa chỉ của byte đầu tin trong 20 byte đã xin!!!
	//malloc() là hàm, lệnh xin Ram ở trên HEAP, khai hoang

	//gán giá trị các cụm byte
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;
	//in HEAP, lúc này xem như là mảng
	printf("The array has value of (HEAP -do' heng)\n");
	for(int i = 0; i < 5; i++)
		printf("%d ", p[i]);

}
void printIntegerListHEAPV2() {
	int* p; 
	
	p = (int*)malloc(20); //20 byte đã đc cấp cho con trỏ int		
	
	*p = 5; //p[0] = 5 4 byte đầu tin
	*(p + 1) = 10; //p[1] = 10 4 byte típ theo  //p++ đc nhưng tui thích chốt đầu mảng!!! con trỏ tự do
	*(p + 2) = 15;
	*(p + 3) = 20;
	*(p + 4) = 25;
	//in HEAP, lúc này xem như là mảng
	printf("The array has value of (HEAP -do' heng)\n");
	for(int i = 0; i < 5; i++)
		printf("%d ", *(p + i));

}