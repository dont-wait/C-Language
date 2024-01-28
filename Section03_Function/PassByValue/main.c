#include <stdio.h>
#include <stdlib.h>

//hiểu cách đưa/truyền giá trị/đưa đầu vào cho hàm

//vẫn hàm quen thuộc y= f(x)= x^2
void f(int x);

int main(int argc, char *argv[]) {
	//f(5); // 5 gán vào x của hàm// pass by value
	int n = 10;
	f(n);
	
	return 0;
}
void f(int x){
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);//y = f(5) = 25
	//return y;//dẹp y lun cx dc, return y; //đl bắt cầu
}