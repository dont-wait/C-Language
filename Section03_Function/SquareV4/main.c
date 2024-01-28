#include <stdio.h>
#include <stdlib.h>

// viết 1 đoạn code theo style hàm tính bình phưn của 1 con số
//IPO
//I 1 con số x
//P  x * x
//O:y= x * x
int fV4(int x); //100% tương thích hàm toán hc y = f(x) = x^2
//y  f  x		// chỉ còn thiếu phần bình phưn
				// lát hồi lm nốt

  
int main(int argc, char *argv[]) {
	//xài hàm có trả về gti, vẫn gọi tên em
	//int result = fV4(5);
	//printf("result: %d\n", result);
	
	//printf("result: %d\n", fV4(10));
	//linh hoạt value đầu vào thì p nhập từ bàn phím
	int n;
	printf("input a number to get ^2: ");
	scanf("%d", &n);
	printf("result: %d\n", fV4(n)); //n dc pass/ chuyền cho hàm
									//TRUYỀN THÁI Y

	return 0;
}
int fV4(int x){
	// coi như x đã có ròi, quy ước ghàm nhận vào x, cứ giả bộ x sẽ có sau
	// cứ xử lí trên x tđuong với tLai sẽ xử lí trên value thật
	// xử lí trên công thức chính là xử lí trên value thật sau này
	// Khi XÀI HÀM THì PHẢI ĐƯA X VÀO> Y CHANG XÀI MÁY XAY SINH TỐ PHẢI
	//ĐƯA TRÁI CÂY, GIẢ BỘ CÓ TRÁI CÂY CÓ RÒI TA LÔI MÁY XÀI
	//LÔI MÁY XÀI,THÌ TRÁI CÂY PHẢI CÓ
	// CHỈ CÓ THG NGÁO THÌ MS SÀI SCANF(x) Ở ĐÂY
	//int y = x * x; // m đưa x t bình phưn, nhận kq đi
	//return y;	   // t ném bìn phưn ra
	return x * x; // cần value để gán cho tên hàm thoy mà
				// 2 value * nhau thì thành 1 value
}