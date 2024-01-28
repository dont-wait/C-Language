#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
int main(int argc, char *argv[]) {
	
	char s1[50] = "Ahihi";
	char s2[50] = "ahihi";
	
	//hỏi xem s1 có lớn hơn s2 hay ko.
	//thuật toán so sánh chuỗi:
	//so từng kí tự tương ứng của 2 chuỗi
	//so từ TRÁI SANG PHẢI
	//thấy khác biệt thì dừng ngay để kết luận. Chuỗi dài hơn,
	//ko có nghĩa là lớn hơn
	//Lưu ý có phân biệt hoa thừn hay ko? ignore case
	//CẤM TUYỆT ĐỐI DÙNG == > < <= >= != CỦA CÁC BIẾN ĐƠN ĐEM SO SÁNH/GÁN MẢNG
	//MÀ PHẢI XÀI QUA HÀM
	int r = strcmp(s1, s2);
	printf("S1 vs S2: %d\n", r);
	if (strcmp(s1, s2) > 0)
		printf("%s > %s\n", s1, s2);
	else
		printf("s1 e'o lo*'n ho*n s2");	
		
	//s1 = giá trị mới, s2 = giá trị mới
	//s1 = "ahihi"; //ĂN ĐÒN NHEN, TÊN CON TRỎ CẦN ĐỊA CHỈ NHEN	
	strcpy(s1, "ahihi");
	strcpy(s2, "z");
	
	printf("\n");
	
	r = strcmp(s1, s2);
	printf("S1 vs S2: %d\n", r);	//z thắng ahihi
	
	strcpy(s1, "AHihi");
	strcpy(s2, "Ah");
	
	r = strcmp(s1, s2);
	printf("S1 vs S2: %d\n", r);	//Ah thắng AHihi, s1 thua s2, âm
	
	strcpy(s1, "AHIHI");
	strcpy(s2, "ahihi");	//dĩ nhiên 2 thg ko bằng nhau do phân biệt hoa thừn
	
	r = stricmp(s1, s2);
	printf("S1 vs S2: %d\n", r);	//2 thg bằng nhau vì chỉ nhận mặt chữ cái
	
	
	
	return 0;
}