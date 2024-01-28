#include <stdio.h>
#include <stdlib.h>

/* Viết chương trình tìm ra max giữa 3 số do người dùng nhập*/
//IPO
//I: nhập vào 3 số nguyên bất kì
//P: sử dụng thuật toán Flag 
//O: đưa ra max
int main(int argc, char *argv[]) {
	int a, b, c, max;
	printf("This program will show you the max of 3 integer numbers\n");
	printf("Please input 3 integer numbers:");
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	if (max = a)
		//printf("Max is:%d", a);
	if (max < b)
		max = b;
	if (max <c)	
		max =c;
	printf("Max number between %d,%d,%d is %d", a, b, c, max);	
	return 0;
}