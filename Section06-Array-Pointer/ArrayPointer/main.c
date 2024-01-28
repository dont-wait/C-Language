#include <stdio.h>
#include <stdlib.h>

void printArray(); //hàm này sẽ in ra 1 cái mảng các số nguyên

void printArrayHEAP();

void inputArray();

void inputArrayV2();

void inputArrayHEAP();

int main(int argc, char *argv[]) {
	//printArray();
	//printArrayHEAP();
	//inputArray();
	//inputArrayV2();
	inputArrayHEAP(); 
	
	return 0;
}

void inputArrayHEAP(){
	int size;
	printf("How many numbers do you want input(HEAP)? ");
	scanf("%d", &size);	
	
	int* hari = malloc(size * 4); //bội số của 4 vì lát hồi mình nhảy 4 - biến int
	//mảng n phần tử
	printf("You are required input %d numbers\n", size);
	for(int i = 0; i < size; i++)
	{
		printf("Input a[%d]: ", (i + 1)); //lừa đảo chỉ số, lập trình đếm từ 0 ngoài đời 1
		//scanf("%d", &a[i]);
		scanf("%d", (hari + i)); //dùng địa chỉ và gửi scanf() kiểu con trỏ
	}
	printf("You has just input the following numbers\n");
	for(int i = 0; i < size; i++)
		printf("%d ", hari[i]); 
		//printf("%d ", *(hari + i));	//CON TRỎ NHƯ MẢNG, MẢNG NHƯ CON TRỎ
	free(hari);
}
void inputArrayV2(){
	//mời nhập 1 mảng từ bàn phím, kích thước mảng sẽ khai báo sau!!!
	//sau khi hỏi bạn mún mấy biến???
	int size;
	printf("How many numbers do you want input? ");
	scanf("%d", &size);
	
	int a[size];	//tùy size(n) là mấy, mảng là mấy
	
	printf("You are required input %d numbers\n", size);
	for(int i = 0; i < size; i++)
	{
		printf("Input a[%d]: ", (i + 1)); //lừa đảo chỉ số, lập trình đếm từ 0 ngoài đời 1
		//scanf("%d", &a[i]);
		scanf("%d", (a + i)); //dùng địa chỉ và gửi scanf() kiểu con trỏ
	}
	printf("You has just input the following numbers\n");
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]); 
}

//nhập 1 mảng từ bàn phím
void inputArray(){
	int a[50];
	//mảng mình khai báo 50 vậy mình nên nhập bao nhiên số
	printf("You are required input 10 numbers\n");
	for(int i = 0; i < 10; i++)
	{
		printf("Input a[%d]: ", (i + 1)); //lừa đảo chỉ số, lập trình đếm từ 0 ngoài đời 1
		//scanf("%d", &a[i]);
		scanf("%d", (a + i)); //dùng địa chỉ và gửi scanf() kiểu con trỏ
	}
	printf("You has just input the following numbers\n");
	for(int i = 0; i < 10; i++)
		printf("%d ", a[i]); 
		

}



//vùng nhớ oanh tạc tự do!!!
void printArrayHEAP(){
	int *hari; //cần lắm lun 1 địa chỉ, tọa độ có thể là trỏ 1 biến int &tt &td
				//cần lắm lun 1 địa chỉ, có thể là đầu mảng a[] = {......}
				//con trỏ có thể trỏ biến đơn, biến đầu mảng   //tt ko tt[] đc vì là biến đơn
	hari = malloc(20); //xin 20 byte/4 = 5 biến int
	
	//Student x = new student(...);
	//		stack (nếu x khai báo trong hàm)    
					//heap
	
	
	hari[0] = 5;
	hari[1] = 10;
	hari[2] = -15;
	hari[3] = 20;
	hari[4] = 25;
	printf("The array has value of(dynamic array)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
	
	//CÂU LỆNH CỰC KÌ QUAN TRỌNG!!!
	free(hari); //trả lại vùng ram chon Win sau khi chạy xog 
				//HEAP trả lại cho WIn
				//Hari nằm trog stack, Window chủ động thu lại
	//KHAI BÁO TRONG HÀM THÌ NẰM TROG STACK //Hari nằm trog stack 
	//vùng nhớ(giá trị) thì lại nằm trog malloc -> ON HEAP kthc hàm vẫn còn lưu trog ram

	//NẾU KO FREE VÙNG MALLOC, MÀ CỨ CHẠY APP CHẠY HÀM NHÌU LẦN, VÙNG HEAP CỨ TĂNG DẦN
	//WINDOW KO LẤY LẠI ĐC, RAM GIẢM DẦN DUNG LƯỢNG
	//LEAK MEMORY
}
void printArray(){
	int a[] = {5, -10, 15, 20, -25};
	//		  a[0] [1]
	printf("The array has value of (using a[]):\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	//tên mảng còn là con trỏ, chốt trỏ bắt buộc vào thằng a[0]
	//ko cho trỏ lung tung như con trỏ khai báo *
	//a= &a[0];
	printf("The array has value of (using *a):\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));

	//a++ m là má mì, m phải chốt vào thg đầu tin!!! ko dc nhảy
	printf("\n");
	
	int* p; //p = &cua-ai-do = địa chỉ/con số tọa độ của biến int nào đó
	p = a; //ko ai cấm a = &a[0]
	
	//KIỂM TRA ĐỊA CHỈ
	printf("Checking the address\n");
	printf("The address of all variable in the array\n");
	for(int i = 0; i <5; i++)
		printf("addr of a[i]: %u\n", &a[i]);
	
	printf("\np point to %u\n", p); //vì p = a = &a[0]
	//p = &a[0]; như nhau
	//CON TRỎ THUẦN CHUẨN
	
	printf("The array has value of (using *p):\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(p + i));
	printf("\nThe array has value of (using *pV2):\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]); //có vuông thì chạy giá trị, ko thì địa chỉ
		
	//con trỏ thuần chủng ngon hơn con trỏ mảng 1 chút, nó đc quyền ++ --
	printf("\nThe array has value of (using *pV3):\n");
	for (int i = 0; i < 5; i++){
		printf("%d ", *p); //p -> a[0]
		p++;			   //p -> a[1] đi 1 căn xog ++ tới căn 2
	}
	printf("\nFinally; p point to %u\n", p);
	//kiểm tra thử coi có đúng p dời nhà, dời trỏ hay ko
		
}