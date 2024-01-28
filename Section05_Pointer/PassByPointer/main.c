#include <stdio.h>
#include <stdlib.h>

//CHO TAO ĐỊA CHỈ TAO SẼ DỌN NHÀ MÀY!!!

//void f(int x); //mỗi lần xài hàm, hãy đưa tui 1 value thừn hoy
			  	 //tui cần 5 10 15 20 hay 1 biến int bth!!!
			  	 //TRUYỀN THAM TRỊ, CHỈ CANAF THẢY 1 VALUE/ 1 GIÁ TRỊ LÀ OKIE
			  	 //GIÁ TRỊ THỪN
			  
void f(int* x); //mỗi lần xài hàm, đừng đưa value 5 20 25 20 hok cần
			   //TRUYỀN THAM CHIẾU, CHIẾU TỪ XA
			   //TAO CẦN 1 TỌA ĐỘ, CHO TAO TOẠ ĐỘ NÀO ĐÓ, XA GẦN ÉO QUAN TÂM
			   //ĐƯA TỌA ĐỘ ĐÂY, KO ĐƯA VALUE THỪN
			   //TAO CẦN ĐỊA CHỈ 1 BIẾN INT NÀO ĐÓ, LÁT TAO DỌN NHÀ NÓ!!!
			   
//LOGIC, *X SẼ CHÍNH LÀ BẢN GỐC, BIẾN Ở XA XA NÀO ĐÓ

int main(int argc, char *argv[]) {

	int x = 10; //biến local
	printf("In main, before calling f() x is %d\n", x);
	
	//MUỐN THAY ĐỔI X MAIN, ĐƯA ĐỊA CHỈ CHO HÀM
	f(&x);
	printf("In main, after calling f() x is %d\n", x);
	return 0;
}
//CHỐT DEAL: MUỐN THAY ĐỔI GIÁ TRỊ Ở NƠI GỌI HÀM, THÌ CẦN ĐƯA ĐỊA CHỈ
//CHO HÀM, HÀM SẼ THAY ĐỔI NƠI GÓC GỌI HÀM 

void f(int* x){		//biến local khác
	*x = *x * *x; 	//chết mẹ em!!!
	
	// *x =       *x        *              *x;
	//biến-xa= biến-xa  phép nhân		biến xa
	//x-main = x-main       *         	x-main
	
	//trong hàm làm phép nhân, chết mẹ, ở xa bị ảnh hưởng
	//*hari lm dì, ví tt hết tiền!!! 
}

