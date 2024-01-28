#include <stdio.h>
#include <stdlib.h>

//nhập từ bàn phím mảng 10 con số bất kì. Hỏi rằng có xh số 10 hay ko
//IPO

int main(int argc, char *argv[]) {
	int n[10];
	int pos = -1;	//biến này đóng bai trò biến flag
					//và lưu vị trí tìm thấy lun
					//-1 để hiểu rằng 10 ếu tìm thấy
					//10 tìm thấy nó bắt đầu thấy ở vị trí mảng
					//0..9
					//nếu pos >= 0...9 nghĩa là tháy m 10 ròi
					//ếu thấy, vẫn -1
	printf("Please input 10 numbers\n");
	for(int i = 0; i < 10; i++){
		printf("input number #%d: ", (i + 1)); //lừa đảo stt vs user
		scanf("%d", &n[i]); // &n[i] ~~~ int yob &yob
	}
	//in mảng
	printf("You have just input the following numbers\t");
	for (int i = 0; i < 10; i++)
		printf("%d ", n[i]);
	//tìm số 10 có xh ko
	for (int i = 0; i < 10; i++)
		if(n[i]== 10){
			pos = i; //pos lưu vị trí từ 0..9 nếu thấy, cờ phất lun
			break;		//pos đóng 2 vai lun
		}
	if (pos == -1)
		printf("\n10 not found\n");
	else
		printf("\n10 found at the position of %d\n", pos +1);
	return 0;
}