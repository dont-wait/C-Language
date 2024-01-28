#include <stdio.h>
#include <stdlib.h>

//kỹ thuật khai báo mảng có trò hay ko. Có
//int a = 10; //Giống như tập hợp/ dãy value ở toán hc phổ thông!!!


int main(int argc, char *argv[]) {
	float c[10] = {1, 1, 2, 4, 5, 4};
	//c[0] = 1; c[5] = 4
	printf("Your ten grades\n");
	for(int i = 0; i < 10; i++)
		printf("Grade[%d] = %.2f\n", i, c[i]);
	float col[] = {1, 3, 4, 5, 6};
	float a[]= {};	// bị chửi vì không nói rõ có bao nhiêu
	//printf("%f", a[4]);				//phải nói rõ số biến cần xin, gán value sau cx
					//vừa xin bao nhiu, vừa gán
					//vừa gán mà kh thèm xin, thì sẽ cấp theo số giá
	return 0;
}