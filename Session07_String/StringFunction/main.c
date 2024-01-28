#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//tự viết hàm copy 2 chuỗi. Độ lại hàm strcpy()
//lí do viết hàm vì ta ko dc gán trực típ 2 mảng ho nhau
//do tên 2 mảng là 2 con trỏ là 2 má mì, 2 má phải chốt/qli
//đúng mảng của mình của mình, ko trỏ lung tung như con trỏ thuần chủng
//khai báo bằng dấu *. LỠ GẮN VÀO MẢNG NÀO, GẮN CHẶT MẢNG ĐÓ

//gán chuỗi cho nhau bản chất là copy value của từng biến char trong mảng này
//gán sang mảng kia
//2 dãy chung cư đối diện mặt nhau ném đồ sang nhau!!!


//void strcy154(char dest[50], char strcy154[50]);//ko hay khi khai báo kiểu này!
//void strcy154(char dest[], char strcy154[]);   //hay hơn 1 chút là kiểu này
void strcy154(char* dest, char* src); //chuẩn nhất

void removeChar(); //tạm thời dùng trong nội bộ hàm cho dễ hiểu
				   //truyền tham số thêm con trỏ dễ xoắn não

void removeCharV2();

void removeCharV3();	//cho tao vị trí m mún xóa, t xóa đúng kí tự đố
						//truyền tham số int pos vị trí mún xóa
//cho chuỗi Ahihi123dongok
//hãy xóa tất cả con số xh trong chuỗi!!!

void removeCharV4();						

int main(int argc, char *argv[]) {
//	char name[50], n[50] = "Ahihi -do ngok. SOS";
//	
//	//tui mún name = Ahihi -do ngok. SOS, đổ sang
//	//ko cho dùng dấu bằng gán mảng, vậy thì sài hàm strcpy() của ngta
//	//												strcpy154 của tui
//	
//	//strcpy(name, n);
//	//name = n; ăn đòn, 2 mảng gắn cho nhau, má mì trỏ chỗ khác è
//	strcy154(name, n);//hàm mình
//	printf("Name: ", name);
//	puts(name);
	removeCharV4();
	return 0;
}
//xóa hết tất cả con số trong mảng, xóa nhiều lần, dồn nhiều lần
//dồn lên là 1 vòng for từ pos đến cúi mảng
//duyệt từng [i] để bt có cần xóa ko, nếu cần thfi xóa (for)
//		for
//for ngoài lấy được từng kí tự, để bt có cần xóa [i] hay ko
//có dc [i] cần xóa, for trong dồn lên
void removeCharV4(){
	char n[50] = "ABD1A1B11H";		//A11H	//A1H pos đã di chuyển tới n[2] ếu ngoành lại đc:))
	//ta phải hỏi từng kí tự coi m có là số hay ko
	for (int i = 0; i < strlen(n); i++)	//đi hết mảng, hỏi từng kí tự
											//coi m có là số hay ko
	{
		if (n[i] >= '0' && n[i] <= '9')	//mày là số, xứng đáng xóa
											//tại vị trí i - pos đó
		{
			for (int j = i; j < strlen(n); j++)
				n[j] = n[j + 1];
			//dồn xog ròi đáy
			//theo lẽ thừn i đi típ qua thg kế
			//nhưng tình huống này có thể thg i-pos dc dồn
			//nó lại là 1 con số, i đi típ trog chuỗi là bị sót con số vừa dồn lên
			//đúng vị trí i
			//ko cho i đi lên sau khi dồn, vì để phòng chỗ pos lại có số
			//con số, xảy ra khi nhìu số gần nhau!!!
			i--;
		}
	}
	printf("After removing numbers in a string: ");
	puts(n);
}
void removeCharV3(){
	char n[50] = "SOS$#Ahihi";
	//tui mún xóa dấu # vị trí 4 tính từ 0
	int pos = 4; //scanf vị trí mún xóa
	for (int i = pos; i < strlen(n); i++)
		n[i] = n[i + 1];
	printf("After removing #: ");
	puts(n);
	
	
}
void removeCharV2(){
	char n[50] = "A1hihi";
	for (int i = 1; i < strlen(n); i++)
		n[i] = n[i + 1];
	printf("After removing 1: ");
	puts(n);
	
}
void removeChar(){
	char n[50] = "A1hihi";	//dài 6 nhưng xài 7, có null
	//			  A 1 h i h i 0
	//xóa số 1, bt trc tại vị trí 1
	//n[0] giữ nguyên
	n[1] = n[2]; //chỗ số 1 thay bằng thg đứng sau, chữ h đi lên
	//			chữ h đi lên chỗ 1, nhưng h ở n[2] vẫn còn, đổ value, gán value
	//			vùng ram lun nằm cố định trog ram
	//			biến cố định tọa độ, nhưng value thì đc đổi
	n[2] = n[3];
	n[3] = n[4];
	n[4] = n[5];//dồn hết rồi, nhưng còn null chưa lên
	n[5] = n[6];
	
	printf("After removing 1: ");
	puts(n);

}
//dest: sẽ trỏ vào 1 mảng cần đổ data vào
//src:	là mảng đg có data, chữ, cần ném cho ai đó
//con trỏ: tao trỏ đầu mảng
//TRUYỀN THAM CHIẾU
//HÀM SỬA BÊN NGOÀI BỊ ẢNH HƯỞNG

void strcy154(char* dest, char* src){
	//đi từ đầu đến cúi chuỗi gốc, copy từng cháu sang bên kia
	for(int i = 0; i <= strlen(src); i++)	// AHIHI len = 5
		dest[i] = src[i];					//ko lấy đc null, chỉ ms có text
	
}