#include <stdio.h>
#include <stdlib.h>

//số nhà hay địa chỉ là 1 con số!!! hiển nhiên
//nhưng con số kh hẳn là số nhà!!! hiển nhin
//&yob -> con số, nhưng nó là số nhà , tọa độ vùng ram
//      6m80

//lật ngược vấn đề: -Cheat Engine: Khi tao có 1 con số
//và t mún nói đó là tọa độ 1 biến khác
//Vậy có cách nào convert 1 con số bth thành địa chỉ ko???

//xưa nay lấy tọa độ phải là dấu &bien

//tự nhiên bây giờ có 1 con số, và mún nói rằng nó là địa chỉ


int main(int argc, char *argv[]) {

	int yob = 2002;
	int* hari;
	
	printf("The address of yob: %u\n", &yob); // xem thử địa chỉ
	printf("Yob: %d\n", yob);
	
	//2293312 địa chỉ điểm game, và h ta sẽ sửa điểm game
	
	//hari =&yob; // ếu còn j để nói	
	//hari = cần 1 địa chỉ, cho em 1 địa chỉ int nào đó
	//hari = 2293312; //ghi thế này ko ổn, vì đây là con số!!!
	//lầm lẫn vs giá trị biến int
	
	//MÌNH PHẢI NHẤN, ĐÂY LÀ CON SỐ, NHMA LÀ ĐỊA CHỈ
	//nếu là địa chỉ thì cất vào biến con trỏ int
	hari = (int*)2293316; //cast /casting/ ép chó thành mèo
							//đưa bột vào khuôn
							//đưa địa chỉ, con số qua (int* )
							//tức là địa chỉ
	printf("Yob now is (via Hari) %d\n", *hari);
	*hari = 101010;
	printf("Finally, Yob now is (via Hari) %d\n", yob);
	return 0;
}