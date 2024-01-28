#include <stdio.h>
#include <stdlib.h>

//viết hàm tính bình phưn 1 con số nguyên

int fV3(); 	//int fV4(int x) 100% hàm toán hc y= f(x)=...
void fV1(); // hàm này kh trả về 1 giá trị nào cả
			// tính toán xử lí , kh ói về 1 value
int main(int argc, char *argv[]) {
	//fV3();//de chạy chs v đó
	//vì hàm là 1 giá trị, nên mún bt gtri thì phải in ra chứ
	//int result = fV3();
	//printf("The result: %d\n", result);
	
	// vì hàm là 1 value int nào đó. ta có thể xài m ở trong 
	// các biểu thức khác !!! - RE -USE
	// định luật bắc càua trong toán hc ~ tương đương value ~ đỗ ngang 
	// a=b; b = c -> a = c
	printf("The result: %d\n", fV3());
	//							result = vì hàm là 1 giá trị
	fV1();
	//printf("The result: %d\n", fV1());// bắt chước hàm loại 3
	//%d cần 1 value mà fV1() chỉ là 1 câu thông báo, éo có value
	return 0;
}
/*int fV3(){
	// vì kh có phễu hứng đầu vào, nên ta phải tự tạo
	int x,y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x); //fV3 ko vào, có ra
	y = x*x;
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}
*/ //có trục trặc
void fV1(){
		printf(" test funcion no value. it is a void function");
}
int fV3(){
	// vì kh có phễu hứng đầu vào, nên ta phải tự tạo
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x); //fV3 ko vào, có ra
	y = x*x;
	//hàm đã RETURN thì kh nên có lệnh printf để in kqua xử lí;
	// vì lm thế , tính re-use sẽ bị thu hẹp
	//bt ns rõ hơn
	//printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
	return y;//tên hàm = giá trị y
			 //y dc ném ra ngoài tên hàm để dùng tiếp
			// tên hàm đc xem là biến có kiểu dữ liệu - khai báo như biến
			//lệnh return chính là gán 1 gtri nào đó cho tên hàm
			//tên hàm từ nay về sau xem như 1 value, dùng tới bến luôn
}