#include <stdio.h>
#include <stdlib.h>

//Tìm min max trong 1 mảng nhập từ bàn phím

int main(int argc, char *argv[]) {
	int a[10];
	int min, max;
	printf("Input 10 numbers\n");
	for (int i = 0; i < 10; i++){
		printf("Input number #%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
		
	min = a[0]; //phải chờ nhập xong thì mới có a[i]
	for (int i = 0; i < 10; i++){
		if(a[i] < min)
			min = a[i];
	}
	printf("\nThe min value of this array is %d\n", min);
	
	return 0;
}