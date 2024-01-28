#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//có 2 loại hàm:
// hàm có sẵn mà thiên hạ viết sẵn rồim cho mình xài. TÌm đem về xài
//mua mấy say sinh tố có sẵn, đem dùng thoy, mua trái cây nhét vào
//nhận sinh tố trả về
//Pre-DEFINED FUNCTION
//tolwr(kí tự) -> chữ thừn
//sqrt(con số) -> căn bậc 2
//abs(con số) -> trị tuyệt đối
//sin(độ gốc cung) -> sin cho m lượng giác
//pow(5, 2) -> trả về 5^2
//pow(10, 10) -> trả về 10^10
//pow(a, b) -) a^b
//..
//đặt hàm này vào những ngăn tủ, cốp xe(thư viện) để phân loại
//ngăn tủ trong C chứa những hàm đc phân loại gọi thì ta gọi là thư viện
//.h
//#include <math.h> ta sẽ mở ngăn math, 1 đống hàm toán học cho mình dùng
//HẦU HẾT ĐỀU LÀ HÀM LOẠI 4, RE-USE

//#include <ctype.h> mở ngăn toàn hàm xử lí ASCII
//#include <string.h> mở ngăn toàn hàm xử lí chuỗi/string/câu văn

//mình có thể làm .h của mình lun, bữa nào rảnh sẽ chỉ!!!

//2. HÀM TỰ LM, nhận vào và trả về, giống hàm nhà ngta
//CUSTOMIZED FUNCTION/ CUSTOM FUNCTION
//getFactorial()

int main(int argc, char *argv[]) {
	
	//tui mún lấy căn bậc 2 của 100 coi đc 10 hem
	//double sqrt(double x)
	//int    getF(int    n)
	//y		 f   (       x)
	//double r= sqrt(100);
	printf("Can bac cua %d la = %.2lf\n", 100, sqrt(100));//lấy 2 số 0 đằng sau thoiiiiiiiiiiiiiiiiiiiiiiiiiii
										//hàm trả về value!!!!!!!!!!!!!
	//bài cơ bản re-use: tính tổng căn 10 + căn 25 + căn 64
	double sum = sqrt(9) + sqrt(25) + sqrt(64);
	printf("sum of can: %.2lf\n", sum);	
	//tính trị -5 là 
	//int r = abs(-5);
	printf("Tri tuyt doi cua %d la: %d", -500, abs(-500));				
										
	return 0;
}