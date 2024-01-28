#include <stdio.h>
#include <stdlib.h>

//viết hàm hoán đổi 2 value!!!a = 10, b = 100
//							  a= 100, b = 10		
//void swapV1(int a, int b); //m đưa t 2 con số
						   
void swapV2(int* a, int* b);//m đưa t 2 địa chỉ
						    //của 2 biến int mịa nào đó
							//lát tao dọn nhà 2 đứa đó ở xa xa
int main(int argc, char *argv[]) {
	int x = 10, y = 100;
	printf("In main(), before swapping, a = %d, b = %d\n", x, y);
	swapV2(&x, &y);
	printf("In main(), after swapping, a = %d, b = %d\n", x, y);
	return 0;
}

void swapV2(int* a, int* b){
	//*a là đứa xa xa, *hari là ví tt ở xa xa 
	//*a
	int t = *a; //lấy value đứa xa xa cất đi
	*a = *b;	//lấy value đứa xa xa b nào đó, cất vào xa xa a
	*b = t;
}
//tham biến &, m đưa cho tao 1 con số, tao tới địa chỉ thằng đó