#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a[] = {-5, -10, 100, -50, 100, -1001, 1};
	//		  [0]  
	//				[1] có nhỏ hơn hay ko, có đổi đi
	// 			-10 -5
	//			-10		[2] có nhỏ hơn [0] hya ko, có đổi
	//			-10	-5	100   [3] có nhỏ hơn [0] hay ko, có
	//			-50  		  -10
	//							   [4]	
	//									 [5]
	//			-1001					-50	
	//											[6]
	int t;
	for(int i = 1; i < 7; i++)
		if (a[0] > a[i]) //tao là a[0] mà lại lớn hơn a[sau]
		{	//đứng trước mà lại lớn hơn đứng sau, sai chỗ
			//phải đổi chỗ
			t = a[0]; // cất a[0]
			a[0] = a[i];
			a[i] = t;
		}
	printf("After swaping, the array now is \n");
	for(int i = 0; i < 7; i++)
		printf("%d\t", a[i]);

	return 0;
}