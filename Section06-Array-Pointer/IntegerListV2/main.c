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
	
	//TÊN MẢNG CX LÀ 1 BIẾN, BIẾN MÁ MÌ, LƯU SỐ NHÀ CỦA THG ĐẦU TIÊN
	//VALUE CỦA BIẾN TÊN MẢNG LÀ SỐ NHÀ
	//HARI LƯU SỐ NHÀ, TỌA ĐỘ VÍ
	//TÊN MẢNG LƯU SỐ NHÀ THG A[0] ĐẦU DÃY
	//TÊN MẢNG LÀ CON TRỎ RÒI, HỎI NÓ CÓ DÌ, GIOG HARI CÓ DÌ
	//EM CÓ ĐỊA CHỈ
	
	for(int i = 0; i < 5; i++)	
		printf("The address of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	printf("a has value of %u\n", a); //m là 1 biến!!!
	//tên mảng là con trỏ int* ~~~ hari
	//a ~~~ hari đều là int*
	
	//hồi nãy mình đi qua mảng = hari
	//giờ này mình đi qua mảng = a kiểu con trỏ, dc hem
	
	//in mảng
	printf("The array has value\n"); //in kiểu bth
	for(int i = 0; i< 5; i++)		//dùng biến a[i] bth 
		printf("a[%d] = %d\n", i, a[i]);
	
	//biết thừa a là tên mảng, lại là biến con trỏ, nắm a[0]
	//&a[0] như hari
	
	printf("The array has value(using pointer):\n"); //in kiểu bth
	for(int i = 0; i< 5; i++)		//dùng biến a[i] bth 
		printf("a[%d] = %d\n", i, *(a + i));
	
	//vẫn giữ chốt a trỏ đầu dãy, + i để dời nhà, lấy địa chỉ ms
	//(*a + i) để lấy value vùng trỏ, mà ko mất chốt!!!
	
	//TUY NHIN HÃY NHỚ:
	// int* hari là con trỏ tường minh, tức là nó thoải mái ++-- trỏ
	
	//a tên mảng dc gọi là con trỏ ngầm/ ko tường minh/ con trỏ hằng
	//là con trỏ, nhưng cấm bị đi lung tung, vc nó là phải chốt
	//đầu mảng, ko cho ++
	//nhưng đc quyền dùng nó để + và - để tăng tọa độ
	//ko đc dời vị trí, CHỈ VÀ LUN PHẢI TRỎ VÀO THG A[0]
	//BIẾN CON TRỎ MÁ MÌ, QUẢN LÍ ĐÁM CHÂN DÀI A[I]
	
	//TÊN MẢNG ĐỨNG 1 MÌNH TƯƠNG ĐƯƠNG INT* HARI
	//TẠI SAO TÊN MẢNG, NGTA KÍ HỊU LUN LÀ CON TRỎ
	
	//int f(int a[]) ~~~ int f(int* a)
	
		
	return 0;
}