#include <stdio.h>
#include <stdlib.h>

//hiểu cách đưa/truyền giá trị/đưa đầu vào cho hàm

//vẫn hàm quen thuộc y= f(x)= x^2
void f(int x);

int main(int argc, char *argv[]) {
	//f(5); // 5 gán vào x của hàm// pass by value
	int x = 10;
	//hỏi nhà x main() ở đâu
	printf("in x main() x address is %u and value is %d\n", &x, x);
	
	f(x);
	printf("after caling f() in x main() x address is %u and value is %d\n", &x, x);
	
	return 0;
}
void f(int x){
	printf("in f main() x address is %u and value is %d\n", &x, x);
	x = 25; // éo chs x= 10 xún
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);//y = f(5) = 25
	printf("after updating x;in f main() x address is %u and value is %d\n", &x, x);
	//return y;//dẹp y lun cx dc, return y; //đl bắt cầu
}