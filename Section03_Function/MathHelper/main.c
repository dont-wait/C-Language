#include <stdio.h>
#include <stdlib.h>

// Tư duy viết hàm cho bài MathHelper
//IPO
//I:Choice

int main(int argc, char *argv[]) {
	int choice;
	float radius;
	
	do
	{	
		printf("\nWelcome you to MathHelper program\n");
		printf("Choose the following fuctions to play with\n");
		printf("1. Compute the disk area\n");
		printf("2. Compute the rectangle area\n");
		printf("3. Compute the trictangle\n");
		printf("4. Compute the \n");
		printf("5. Quit\n");
		printf("Choose 1..5: ");
		scanf("%d ", &choice);
	
		switch (choice) //if choice là mấy thì lm j???
		{
			case 1:
				printf("You choose to compute the disk area\n");
				printf("Please input radius(r > 0): ");
				scanf("%f", &radius);
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