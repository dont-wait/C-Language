#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Tư duy viết hàm cho bài MathHelper
//IPO
//I:Choice
void printMenu();
float computeDiskArea(float radius);
const float PI = 3.14; // biến toàn cục
							// hàm nào cx xài đc em!!!!!!!!!!
int main(int argc, char *argv[]) {
	int choice;
	float radius, area;
	
	do
	{	
		printMenu();
		printf("Choose 1..5: ");
		scanf("%d", &choice);
		switch (choice) { //if choice là mấy thì lm j???
			case 1:
				//computeDiskArea();
				
				printf("You choose to compute the disk area\n");
				printf("Please input radius(r > 0): ");
				scanf("%f", &radius);
				printf("The disk with r = %.2f has the area is %.2f\n", radius, computeDiskArea(radius));  
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
float computeDiskArea(float radius){
	float  area;
	//area = 3.14 * radius * radius;
	//area = 3.14 * pow(radius, 2);
	return PI * pow(radius, 2);
	//printf("The disk with r = %.2f has the area is %.2f\n", radius, area );
	
}

//float computeDiskArea(float x)