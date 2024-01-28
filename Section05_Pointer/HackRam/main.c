#include <stdio.h>
#include <stdlib.h>

//Lễ tình nhân/ 8.3,tặng phiếu mua hàng, $?
//anh í có tặng mình tiền/phiếu mua hàng hay ko???
//?$

int main(int argc, char *argv[]) {
	
	int gift = 16164; //trong ram lưu con số 4 byte
					  //2 byte dưới onoff thành con số 63 36
	int* hari = &gift;
	//char* hack = &biến char khác;
	//char* hack = &địa chỉ biến char khác;
	char* hack = &gift; //hơi liều hơi lầy, cx là địa chỉ hoy mà
	//nhưng chỉ nhìn 1 byte hoy
	
	//hari phải nhìn 4 byte lận 
	
	//hỏi Hari, em đang lưu tọa độ, địa chỉ gì
	printf("Gift addr = %u\n", hari); 

	//hỏi rằng hari đang trỏ đến value cụ thể nào nào???
	printf("Gift = %d\n", *hari);
	
	//hỏi hack dg trỏ kí tự gì?
	
	printf("Hack ? $$$$ = %c\n", *hack); //$ 72
	
	hack ++; // lên 73 đó, ko nhảy 4 byte sang int kế nếu có
			 // char* nhảy từng byte, vẫn xà quần trong gift
			 
	printf("Finally Hack ? ???? = %c\n", *hack);
	printf("73 address ? ???? = %u\n", hack);
	
	return 0;
}