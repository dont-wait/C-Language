#include <stdio.h>
#include <stdlib.h>

/* viết hàm mô phổng lại hàm toán học y= f(x)= x^2 */
void fV1();

void fV2(int x);

int main(int argc, char *argv[]) {
	//for (; ; )//vjp muon nhap bao nhiu lan cx dc //for ( int =1; i<= 10; i++) gioi han ngui nhap dc 10 lan
		//fV1();
	//fV2(-5);	//thiếu sự linh hoạt, Hard Code!!!
				//fV2(tớ chỉ cần 1 con số/value ở đây thoi mè)
				//value đó là value cứng, hay value từ bàn phím, đều là value
	int n;
	do{
			printf("Input an integer to get ^2:");
			scanf("%d", &n);
			fV2(n); //gọi ra để xài
			//fV1();
	  } while (n != 0);
	printf("bai bai bai!!!");
	
	return 0;
}
void fV1()
{
	//IPO
	//I: nhập x
	//P: xử lí biến x để có đầu ra là y
	//O: ra y
	int y, x;
	printf("Please input an integer to get ^2:");
	scanf("%d", &x);
	y = x*x;
	printf("y = f(x)= x^2,f(%d)=%d\n", x, y);
}
void fV2(int x)//biến cục bộ
{
	//CHỈ CÓ THẰNG NGÁO MS XÀI SCANF(X) Ở ĐÂY
	//Vì lệnh ở đây chính là coong thức tính toán giá trị 
	//đầu vào nên ta phải xem nhu đầu vào đã biết rồi
	//nó là con số nào đó sẽ nói sau,nhưng đc gọi tạm là
	//x, nói cách khác x là 1 giá trị nào đó đc đưa vào!!!
	//ko càn scanf(), vì lát hồi xài hàm, giống toán
	//thảy đưa value vào cho x ở chỗ dấu ()
	//f(5) toán, thì code sẽ là fV2(5)
	//ta ko khai báo biến x như V1, x có ở ngả đầu vào từ tên hàm!!
	int y= x * x;
	printf("y = f(x)= x^2,f(%d)=%d\n", x, y);
}