#include <stdio.h>
#include <stdlib.h>

// cho 1 mảng 5 con số lộn xộn thứ tự
//sắp xếp mảng tăng đần ( trái sang phải
//IPO
//I 5 con số mảng
//P:    5     -10    15    -20    25
//		[0]     [1]   [2]   [3]
//		-10    5      15     -20   25
//      -20    5      15     -10   25
// cách 2, ko dùng pos
//   [0] tiêu chuẩn/ mốc!!!
//   [0]min > [1], đứng đầu bảng thì phải nhỏ hơn ngta
//					có lớn hơn, đổi value
//	 [0] > [1] có lớn hơn, có, đổi value
//   [0] > [2] có lớn hơn? ko
//	 [0] > [3] có lớn hơn? CÓ. đppỏ
//   [0] > [4] có lớn hơn? Kp

//   [0] > [I] có lớn hơn? có thi đổi [0] [i]
//	 
// [0] làm mốc ta quét từ [1] >
// [0] làm mốc thì for từ 1, if [0] > [i] swap [o] [i]
//								int i = [0]
//									[0] = [i]
//									t = [i]

//thg đầu mảng phải là nhỏ nhất!!! -20 phải về đầu
//min    [0]
//quét        [1] < min, min -> min [1] = -10, pos = 1
//quét        [2] < min !!!!
//quét        [3] < min -> , min [3] = -20 pos = 3
//quét		  [4]  < min!!!
//O: 5 con số đc đổi lại vị trí cho thích hợp

int main(int argc, char *argv[]) {
	int a[] = {5, -10, 15, -20, -25}; // mảng 5 for < 5
	printf("Before sorting, the array is\n");
	for (int i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	printf("\n");
	int t;
	 //chốt 0 làm mốc, so với tát cả phần còn lại, tức là
	 //chốt 0 quét từ 1
	for (int i = 1; i < 5; i++)
	 	if (a[0] > a[i]){ //[0] đứng trước mà lại lớn hơn đứng sau
	 					  //phải đổi value
	 		t = a[0];
			a[0] = a[i];
			a[i] = t; 	
		 }
	//chốt 1 quét từ 2
	for (int i = 2; i < 5; i++)
		if (a[1]> a[i]){
			t = a[1];
			a[1] = a[i];
			a[i] = t;
		} 
	//chốt 2 quét 3
	for (int i = 3; i < 5; i++)
		if (a[2]> a[i]){
			t = a[2];
			a[2] = a[i];
			a[i] = t;
		} 
	//chốt 3 quét từ 4 // hết mảng ròiiiiiiiiiiiiiiii
	for (int i = 4; i < 5; i++)
		if (a[3]> a[i]){
			t = a[3];
			a[3] = a[i];
			a[i] = t;
		} 

	//vì 0 đã xong, đã nhỏ nhất, so với phần còn lại	 
	//chốt 1, chốt 1 quét từ
	printf("After sorting ascending, the array is\n");
	for (int i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	
	return 0;
}