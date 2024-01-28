#include <stdio.h>
#include <stdlib.h>

//mình có xài đồ nhà ngừi khác được kh?
//anh có nhìn thấy em ko?
int yob = 2002;

void printYob();
void printLatestYob();
void seeNothing();

int main(int argc, char *argv[]) {
	seeNothing();
	printf("in Main(), your yob is: %d\n", yob);
	return 0;
}
void seeNothing()
{
	int yob = 2010; //biến local trùng vs global
					//ưu tiên ngừi nhà
					//hiện tượng local lấn át/che/hide global
					
	printf("in seeNothing(), your yob is: %d\n", yob);

}

	

void printYob(){
	int age = 2022 - yob; //hợp lệ vì yob là global
	//age là local
	printf("Your age is %d\n", age);//ngon lành vì cùng nhà
}
void printLatestYob(){
	int age;
	printf("Your age is %d\n", age); // ko đc xài biến nhà ngta
									//local
	//hoặc ko xài, hoặc khai báo riêng, hoặc khai báo toàn cục
}