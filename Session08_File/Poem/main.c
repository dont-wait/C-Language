#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void writeFile();	//ghi từ ram xún đĩa cứng
void readFile();	//đọc từ đĩa cứng vào ram

int main(int argc, char *argv[]) {

	writeFile();
	//readFile();
	return 0;
}

void readFile() {
	
	FILE * f = fopen("tuay.txt", "r"); //read hen, open 1 tập tin
	char ch; //biến lưu 1 kí tự
	do {
		ch = fgetc(f);
		printf("%c", ch);
		
	}while (ch != EOF);	//end of file
	
	fclose(f);
}
void writeFile() {
										//save 1 tập tin
	FILE * f = fopen("tuay.txt", "w"); //w: write hen, a: append vào đuôi
	fprintf(f, "Tu ay trong toi bung code gao\n");
	fprintf(f, "Man hinh code do cua con tim\n");
	fprintf(f, "Hon toi ngap tran do-for-if\n");
	fprintf(f, "Rat nhi phan va day tieng do la\n");
	fclose(f);

	printf("The file is created successfully\n");
	
}