#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Tư duy viết hàm cho bài MathHelper
//IPO
//I:Choice
void printMenu();
void computeDiskArea();
const float PI = 3.14; // biến toàn cục
							// hàm nào cx xài đc em!!!!!!!!!!
int main(int argc, char *argv[]) {
	int choice;
	
	
	do
	{	
		printMenu();
		printf("Choose 1..5: ");
		scanf("%d", &choice);
		switch (choice) { //if choice là mấy thì lm j???
			case 1:
				computeDiskArea();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				printf("Bye bye. See u next time\n");
				break;
			
		}
	} while (choice != 5);
	
	
    	return 0;
}
void printMenu(){
	printf("\n===============================================\n");
	printf("\nWelcome you to MathHelper program\n");
	printf("Choose the following fuctions to play with\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the trictangle\n");
	printf("4. Compute the \n");
	printf("5. Quit\n");
	
}
void computeDiskArea(){
	
	float radius; //area // ếu cần nx, khỏi biến trung gian
					// vd tính pt cần delta, thì ta khi phép tính vào 
					//phần in ra, kh cần khai báo thêm delta chi nx
	printf("You choose to compute the disk area\n");
	printf("Please input radius(r > 0): ");
	scanf("%f", &radius);
	//area = 3.14 * radius * radius;
	//area = 3.14 * pow(radius, 2);
	//area = PI * pow(radius, 2);
	//printf("The disk with r = %.2f has the area is %.2f\n", radius, area );
	printf("The disk with r = %.2f has the area is %.2f\n", radius, (PI * pow(radius, 2)));  
}

