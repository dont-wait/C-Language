#include <stdio.h>
#include <stdlib.h>

//nhập 1 mảng 10 con số sau đó in ra con số nhỏ nhất, lớn nhất của mảng
//IPO
//I:cần có 10 con số, khai báo lẻ, sỉ - mảng
//P: -5 10 100 -50 1000
//	  0 1   2   3   4
//quét nhìn qua cả mảng, [i] mày là mấy??
//biến cờ, nguyên tắc giả định
//ko sai thì vẫn đúng
//min = -5 = [0] thg đầu tiên mảng lầ Min
// if [1] < min, min[1] -> ko xảy ra, min như cũ
// if [2] < min, min[2] -> ko xảy ra ,min như cũ       
// if [3] < min, min = [3] -> có xảy ra thật, min = -50
// if [4] < min, min = [4] -> ko xảy ra, min = -50
 
//max = -5 = [0]
//if [1] > max, max = [1] = 10 có xảy ra 
//if [2] -> max, max[2] = 100 
//if [3] > max = 3 ko xảy ra, max 1
//if [4] > max = 4 = 1k
//O: min max -> 2 biến

int main(int argc, char *argv[]) {
	
	int a[20] = {-5, 10, 100, -50, 1000, 1, 2, -50, 1001, 1};
	int min, max;
	min = a[0]; // biến a[0] chứa value -5, tên biến phức tạp hơn
	max = a[0];
	for (int i = 1; i < 10; i++){
		if (a[i] < min)
			min = a[i]; // cờ chỉ đổi min khi min > ai đó
		if (a[i] > max)
			max = a[i];
	}
		
	printf("The min value of this array is: %d\n", min);
	printf("The max value of this array is: %d\n", max);
	return 0;
}