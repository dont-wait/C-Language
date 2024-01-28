#include <stdio.h>
#include <stdlib.h>

//TT đi Mỹ đêo theo 5000$
//ảnh có xài mua LV hết 1000
//sau đó ảnh đưa ví cho Hari dùng

//sau đó về VN Hari đi cà phê TĐ
//TD mua tặng Hari 1 cái túi HM

int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	
	printf("1st, TT now has %d; TD now has %d\n", tt, td);
	printf("1st, vi's TT is at %u; vi's TD is at %u\n", &tt, &td);
	// 2 ví sát nhau, hàng xóm, vùng ram TD 84-85-86-87
	//										88-89-90-91
	int* hari = &tt;
	//hỏi hari TT đg có bao nhiêu
	printf("1st, Hari said, TT has %d", *hari); //tt có 5000
	
	//hari mua đồ hết 4000
	
	*hari -= 4000;
	
	//hỏi lại TT còn lại bao nhiu, hỏi qua Hari cx oke
	printf("\n2nd, Hari said, TT now has(after 4k) %d", *hari);
	printf("\n2nd, TT said, TT now has(after 4k) %d", tt);
	
	//Hari xem ví TD, ta muốn có danh bạ ms, thay danh bạ cũ	
	//gán giá trị ms cho biến con trỏ - 1 biến gán = như bt
	//										CHỈ ĐC GÁN = ĐỊA CHỈ MS
	hari = &td;
	printf("\n3rd, Hari said, TD now has %d\n", *hari);	
	*hari -= 2000; // tiêu của TD 2k
	printf("4th, TD said, TD now has(after Hari 2k) %d\n", td);	
	return 0;

}