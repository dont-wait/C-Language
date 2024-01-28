#include <stdio.h>
#include <stdlib.h>

//cho 1 mảng 10 phần tử, 10 biến có value
//tìm con số nhỏ nhất đưa nó lên đầu mảng!!!
//IPO
//		-5  10 100 -50 100 -1001 1
//min = a[0]
//if a[1] < min, có thì min  = a[1] nhé , ko
//if a[2] < min, có thì min = a[2] nhé, ko
//if a[3] < min, có thì min = a[3] nhé, có, MIN = -50
//											pos = 3;
//if a[4] < min, có thì min = a[4] nhé, ko
//if a[5] < min, có thì min = a[5] nhé, có, MIN = -1000
//											pos = 5;
int main(int argc, char *argv[]) {
	int a[] = {-5, 10, 100, -50, 100, -1001, 1};
	int min = a[0];
	int pos = 0;// mặc định nhỏ nhất là thg đầu tiên
	int t;
	for(int i = 1; i < 7; i++)
		if (a[i] < min){//có ai ở vị trí i < min
						//min đổi vai cho thg a[i]
			min = a[i];
			pos = i;// vị trí i thấy a[i] < min, min mới
			
		}
	if(pos > 0){ // min nằm ở lưng chừng, hoán đổi
		t = a[0];
		a[0] = a[pos];//a[0] = a[5] //pos là nơi tìm thấy min
		a[pos] = t;
	}
	printf("After swaping, the array now is \n");
	for(int i = 0; i < 7; i++)
		printf("%d\t", a[i]);

	return 0;
}