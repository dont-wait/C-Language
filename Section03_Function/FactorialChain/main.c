#include <stdio.h>
#include <stdlib.h>

//Viết app in ra tổng cảu dãy số sau 1! + 2! + 3! + 4! + 5!
//bài phức tạp, ta chẻ nhỏ ra, có sự lặp lại của role tinhGiaiThua() - TÁCH HÀM

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	//printf("0! = %d\n", getFactorial(0));
	//printf("5! = %d\n", getFactorial(5));
	//getFactorial(5);
	printf("5! = %d\n", getFactorial(5));
	
	//REUSE BẮT ĐẦU
	//TÍNH TỔNG 1! + 2! + 3! + 4! + 5!
	//			1	2		6  24   120
	//			3
	//					9	
	//							33	153
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	printf("Sum of factorial chain from 1! to 5! = %d", sum); //153
	return 0;
}
int getFactorial(int n){
	
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1; 
		
	for(int i =2; i <= n; i++) //chua xet n < 0
			acc *= i;
			
	printf("print inside a function;%d! = %d\n", n, acc);//câu lệnh in kq xử lí trong hàm có return
								// là kh nên, vì ảnh hưởng ReUse		
	return acc;
}
/*int getFactorial(int n){
	
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1; 
		
	for(int i =2; i <= n; i++) // chưa xét âm ( n < 0)
		//{
			acc *= i;
			//return acc;//TOANG ME NO ROI`,RETURN QUA' SOM, TINH FOR XOG MS RETURN
	
		//}
	return acc;
	}*/
