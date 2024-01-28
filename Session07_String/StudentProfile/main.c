#include <stdio.h>
#include <stdlib.h>
#include <string.h> //kho đồ chs, đồ chs lin quan ts chuỗi
void storeName(); //khai báo chuỗi kiểu mảng 'S' 'O' 'S'

void storeNameV2(); //khai báo chuỗi kiểu "" cho hiệu quả
					//tự chèn null

void storeNameV3(); //đổi kí tự từ thừn sang hoa

void storeNameV4(); //đổi chuỗi từ thừn sang hoa

void storeNameV5();	//Nhập chuỗi từ bàn phím
					//%s hok thèm lấy tên sau dấu cách đầu tin
					
void storeNameV6();	//lấy lun chuỗi có dấu cách
					//hãy xem enter như là phím duy nhất để
					//kết thúc việc nhập. Dấu cách là data thừn
					//ko dùng dấu cách mặc định để phân cách các 
					//value trong quá trình nhập

void storeNameV7();	//nhập chuỗi bị ló thì sao
					//lố chiều dài

void storeNameV8();	//nhập chuỗi có chặn độ dài, chấp nhận dấu cách

void storeNameV9();	//nhập chuỗi ko chặn độ dài, dễ viết hơn!!!

void storeNameV10();	//gán giá trị cho mảng/chuỗi thế nào?

int main(int argc, char *argv[]) {
	storeNameV10();
	
	return 0;
}
void storeNameV10(){
	char n1[50] = "Ahiihi";	//okie, gán ngay lúc khai báo ko vấn đề
	char n2[50] = {'A', 'h', 'i', 'h', 'i', 0};
	//										kết thúc mã ASCII NULL nè 0000 0000
	//OKIE nhìn mệt quá, khốn nạn quá
	char n3[50] = {'A', 'h', 'i', 'h', 'i', '\0'};
	//										kí tự NULL, ếu chs mã ASCII
	//okie, vất vả quá
	
	char name[50]; //khai báo trc, gán sau
	//name1 = "AHIHIHI";	//dấu = chỉ dùng lúc khai báo or 
						//gán 1 biến đơn!!!	cấm gán gtri cho mảng/chuỗi
	
	//name = n1;	//cố gắng lấy ahihi ở n1 gán vào name1					
	//ko cho vì 2 con trỏ đổ value cho nhau
	//nếu con trỏ thuần chủng * thì ôke
	//còn đây là con trỏ má mì, chốt mảng từ đầu rồi
	//ếu cho trỏ chỗ khác
	//ta phải dùng đồ chs
	
	strcpy(name, n1);	//n1 đổ vào name
	//vào mảng n1 copy từng kí tự n1 đổ sang tương ứng name
	//copy lun cả NULL ở cuối chuỗi
	printf("After copy the string, name now is: ");
	puts(name);
}

void storeNameV9(){
	char name[50];
	printf("Input your name: ");
	gets(name);
	puts(name);	//tên mảng chuỗi đưa vào - ONLY CHUỖI/MẢNG
	printf("Your name is: %s\n", name);
	
	
	
}

void storeNameV8(){
	
	int yob = 2002;
	char name[10];	//tên ngắn đối chiếu cho dễ
	
	//xem địa chỉ ram
	
	printf("yob = %d; Yob addr: %u\n", yob, &yob);
	printf("Name[0] addr: %u\n", name);	//&name[0]
	
	printf("Input your name: ");
	scanf("%9[^\n]", name);	//nhận tối đá 9 kí tự, chấp m gõ dài!!! //phần dư bị đưa vào buffer
	printf("Hi, %s\n", name);
	printf("Yob: %d\n", yob);
	printf("\n");
}

void storeNameV7(){
	
	int yob = 2002;
	char name[10];	//tên ngắn đối chiếu cho dễ
	
	//xem địa chỉ ram
	
	printf("yob = %d; Yob addr: %u\n", yob, &yob);
	printf("name[0] addr: %u\n", name);	//&name[0]
	
	printf("Input your name: ");
	scanf("%[^\n]", name);	//nhập tên và nhập lố 10 kí tự
							//ảnh hưởng biến sau!!!
							//chặn độ dài khi nhập!!!
	printf("Hi, %s\n", name);
	printf("yob: %d\n", yob);
	printf("\n");
}
	
void storeNameV6(){

	char name[50];
	printf("Input your name: ");
	scanf("%[^\n]", name);	//đưa địa chỉ thg đầu mảng
							//nó chính là địa chỉ &name[0]
	//đổ lun 1 loạt các kí tự vào dãy biến san sát nhau
	//đưa nhà thg đầu dãy
	//do có cả đám biến liền nhau, ăn ké lun... đổ full lun
	
	printf("Hi, %s", name);
}	
		
void storeNameV5(){
	char name[50];
	printf("Input your name: ");
	scanf("%s", name);

	printf("Hi %s", name);
	
}

void storeNameV4(){
	char name[50] = "giao.lang";
	printf("The original name : %s\n", name);
	strupr(name);//đù, tại sao đưa mảng cho hàm, mà hàm thay đổi
				 //mảng bị thay đổi
				 //giống swap(int* a, int* b)
	
	//truyền tham chiếu
	printf("The original name : %s\n", name);

	//tên mảng name ở main(), đưa cho hàm strupr()
	//hàm chạy xog, name bị thay đổi
	//rõ ràng name là địa chỉ name[0] đưa cho hàm
	
	
}
void storeNameV3(){
	char name[50] = "giao.lang"; //đổi tên thừn thành hoa
	printf("The original name: %s\n", name);
	//đổi từ thừn sang hoa
	//quét tất cả các kí tự, +- 32 đơn vị tùy hoa thừn
	for (int i = 0; i < strlen(name); i++)
		if (name[i] >= 'a' && name[i]<= 'z')
			name[i] -= 32;
		//name[i] -= 32; //name[i] là từng kí tự lẻ 
	printf("The upper case name: %s\n", name);
}

void storeNameV2(){
	
	char name[] = "E't o^ e't";
	//khai báo chuỗi nhanh hơn, khỏi cần ghi từng kí tự
	//nháy đôi, 
	//C tự chèn thêm kí tự null vào cúi chuỗi!!!
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));
	for(int i = 0; i < 50; i++)
		printf("%c", name);
}

void storeName() {
	
	
	int 	a[] = {2, 4, 6, 8, 10};
	//char name[] = {'S', 'O', 'S', '\0', '$', '#'};
	char name[] = {65,'S', 'O', 'S','\0', '0', '$', '#'};
	//kí tự đc quyền theo 2 cách: mã ASCII hoặc bản thân kí tự
	//kí tự là nháy đơn, mã ASCII là con số nguyên
	
	//hàm xem độ dài của chuỗi /tên mình strlen(đưa chuỗi vào) -> độ dài
	int len = strlen(name);
	printf("The length of your name: %d\n", len);
	
	
	printf("Your name: %s", name);
	//%s quét chuỗi/mảng cho đến khi gặp NULL dừng ngay!!!
	//báo hiệu hết chuỗi ròi, ko cần đi hết mảng
	
	//mún in phần sau null, thì xài for bth
	//for bth sẽ quét qua từng phần tử mảng
	printf("\nYour name (printed by using for)\n");
	for(int i = 0; i < 8; i++)
		printf("%c", name[i]);
	
}