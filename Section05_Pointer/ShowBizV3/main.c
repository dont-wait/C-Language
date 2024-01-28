#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	int *hari; //chưa trỏ ai cả, từ từ !!!
	printf("1st, TT now has %d; TD now has %d\n", tt, td);
	printf("1st, vi's TT is at %u; vi's TD is at %u\n", &tt, &td);
	// 2 ví sát nhau, hàng xóm, vùng ram TD 84-85-86-87
	//										88-89-90-91
	hari = &td; //hari trỏ ví TD
	//hỏi td có nhiu
	printf("1st, Hari said, TD now has %d\n", td);
	printf("1st, Hari said, TD now has %d\n", *hari);

	//tui mún, hari lấy ví tt, vậy lm sao?
	//hari = &tt; //quá quen hg thèm lèm
	hari ++; //tui là danh bạ, ++ tui nghĩa là đi sang căn nhà kế, địa chỉ kế
	//tui là số nhà, số nhà++ nghĩa là đi sang kế 1 căn
	
	//Hari ơi nhà em đg trỏ có bao nhiu tìn
	printf("2nd, Hari said, ai do now has %d\n", *hari);
	//++ nhma +4 vì 1 biến int chưa 4byte
	//tui đang trỏ tọa độ 84, ++ ko p 85 mà nhảy cóc là 88
	
	(*hari)++;	//vào vùng ram TT, tăng value 5k + 1
	++(*hari);	//++ -- của biến bth
	printf("TT now has %d\n", tt); 
	printf("3rd, Hari points to %u\n", hari); //hỏi hari có j, có ví
	hari --;
	printf("4th, after -- Hari points to %u\n ", hari); 
	return 0;

}