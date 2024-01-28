
#include <stdio.h>
#include <stdlib.h>

//nhập từ bàn phím mảng 10 con số bất kì. Hỏi rằng có xh số 10 hay ko
//Hỏi rằng có bao nhiu số chẳn
//tính tổng các số lẻ
//5 10 15 20 25 30 25 40
//IPO
//Icần mảng
//P duyệt mảng, [i] m chẵn hok? dạ em ko, kệ m
								// có, count++
								// có, sum = sum + [i]
								// ta lấy lun value nhồi vào !!!
//O có mấy chẵn, có mấy chẵn count
int main(int argc, char *argv[]) {
	int n[10], evenCount = 0,sumOdd = 0;//vip
				//số chẵn	//số lẻ ;
	
	printf("Please input 10 numbers\n");
	for(int i = 0; i < 10; i++){
		printf("input number #%d: ", (i + 1)); //lừa đảo stt vs user
		scanf("%d", &n[i]); // &n[i] ~~~ int yob &yob
	}
	//in mảng
	printf("You have just input the following numbers\t\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
		
	printf("\n");//xuống hàng khi in xog mảng
	//quét mảng, cùng lúc lm nhìu vc, đếm số chẵn, tính tổng lẻ 	
	// mỗi lần quét mảng , là ta có value biến [i]
	// ta có quyền lm j vs value[i] biến [i] này mà
	for (int i = 0; i < 10; i++){
		//Hỏi từng i 1 coi m là dì
		if (n[i]%2 == 0)
			evenCount++; // gap 1 thg chẵn đếm lìn
		else 
			sumOdd += n[i]; // gặp thg lẻ cộng lun value thg lẻ
	}					//nhồi heo đất

	printf("There is/are %d even number(s) in this array\n", evenCount);
	printf("The sum of odd number(s) in this array is : %d\n", sumOdd);
	return 0;
}