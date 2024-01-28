#include <stdio.h>
#include <stdlib.h>

//viêt hàm y = f(x) = x^2
//hàm lm nv BÌNH PHƯN ĐẦU VÀO!!!
void f(int x);

int main(int argc, char *argv[]) {
	
	int x = 10;
	
	printf("In main(), before calling f() x is: %d\n", x); //10
	
	f(x); //CALLING/CALL/INVOKE/GỌI HÀM
	
	printf("In main(), after calling f() x finally is: %d\n", x); //10 or 100 
	
	return 0;
}
void f(int x){ //x khác-x hàm
	printf("In f(), x before ^2: %d\n", x); //10
	x *= x; //x = x*x; gán tự thân, tự tao tăng lên
	printf("In f(), x after ^2: %d\n", x);  //100
	//sure x đã bị đổi trong hàm!!!
	
}