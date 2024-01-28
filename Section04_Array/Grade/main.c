#include <stdio.h>
#include <stdlib.h>

// lưu 10 cột điểm của môn C và in ra
//IPO: 10 biến

int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8;//...
	float c[10];//y chang kết quả câu lệnh trên; có 10 biến lun !!!!
				//c[0], c[1], c[2], c[3],...c[10]
	printf("bie^'n le?: %.2f %.2f %.2f\n", c1, c2, c3);
	printf("bie^'ma?ng: %.2f %.2f %.2f\n", c[0], c[1], c[2]);
	//mỗi biến trong mảng, tính từ 0, đc gọi là 1 phần tử mảng
	//ELEMENT
	
	//muốn nhập giá trị cho biến thường // biến mảng //phần tử của mảng
	
	printf("Input 2 grades (0..10): ");
	scanf("%f", &c2); // biến thừn
	scanf("%f", &c[1]);//biến mảng, m là biến float thoi mè
	
	printf("After inputing two grades, the current grades are: \n");
	printf("bie^'n le?: %.2f %.2f %.2f\n", c2);
	printf("bie^'ma?ng: %.2f %.2f %.2f\n", c[1]);
	



	return 0;
}