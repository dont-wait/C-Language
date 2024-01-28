#include <stdio.h>
#include <stdlib.h>

//ta làm toàn bộ thao tác trên tập tin qua các hàm void ko đầu vào
//hàm loại 1 - thí nghiệm cho nó gọn gàn
//thực tế: dùng linh hoạt các hàm loại 2 3 4
void saveAChar();	//lưu đúng 1 kí tự ra tập tin trên ổ đĩa

void openAChar();	//hàm đọc kí tự đg có trong tập tin
					//đọc xog đưa vào biến trong ram, và in ra màn hình
					
void openChars();	//hàm đọc nhiều kí tự từ tập tin, do tập tin có nhiều kí
					//tự mà hàm fgetc() chỉ đọc đúng 1 kí tự tính từ đầu tập
					//tin, ta yêu cầu hàm này đọc tiếp đi mày
					//có nghĩa là đọc được nhiều kí tự hơn!!!

void openCharsV2(); //tập tin có quá trời kí tự, đọc rất nhiều lần mới hết đc
					//bao nhiêu lần thì hết, tùy độ dài/ số kí tự có trong file
					//đọc đến bao giờ, đọc đến hết tập tin gặp EOF
					//vòng lặp đọc đến EOF - còn chưa EOF còn đọc típ!!!
					//while (ch != EOF) thì đọc típ đi
					//đọc từng byte từ tập tin, thấy byte đó chưa là EOF
					//thì đọc típ

void saveADocument();	//hàm moi user nhap mot van ban tu ban phim
						//có quyền căn lề, dấu cách, xuống hàng(đơn từ
						//văn bản thì có nhiều dòng)
						//khó khăn: khi nào thì kết thúc nhập??? dấu hiệu
						//kết thúc nhập để save ra tập tin??
						//dùng các kí tự bàn phí, thông thường thì ko ổn
						//# để kthuc, nhưng # nếu là contents thì sao??
						//ta phải gõ những phím mà ko để lại dấu ấn/dấu vết
						//phím vô hình dùng để kết thúc nhập mà ko ảnh hưởng
						//contents
						//enter ko dc, do tham gia việc xuống hàng
						//vậy ta sẽ chơi những tổ hợp phí, - HOT key
						//những tổ hợp này tạo bởi Ctrl-phím
						//						   Alt-phím
						//						   window-phím
						//là những tổ hợp phím vô hình, dùng để ra lệnh gì đó
						//nó cx có mã ASCII riêng
						//NON-PRINTABLE CHARACTER
						//	BÀI NÀY TA DÙNG CTRL-S kết thúc nhập và save tập tin
						//mã ASCII là 19 - mã tổ hợp
						
						//ta phải dùng hàm đặc biệt là getchar() -> trả
						//về kí tự vừa gõ mà ko cần nhấn Enter
						//CHO TỪNG BIẾN
						//bài này ta gõ nhiều cho đến khi Ctrl-S, nhấn
						//enter	giữa chừng là nhập xuống hàng chứ không kết thúc
	
	
						
int main(int argc, char *argv[]) {
	
	//saveAChar();
	//openAChar();
	openCharsV2();
	//saveADocument();
	return 0;
}
void saveADocument(){
	char ch ;	
	FILE* f = fopen("don-doi-chuyen-nganh.txt", "a");	//tao mún tìm chữ $ trên tập tin/đĩa
										//đem nó vào ram, in ra màn hình
										//read/open/input
	printf("You are required to input a document. Hit Ctrl-S to stop & save your work to do");
	//đọc in đọc in đọc in cho đến EOF
	
	
	do{
		
		ch = getchar();	//ko cần scanf(), cứ gõ đi mày, gõ 1 kí tự gán ngay vào biến
							//ếu cần enter
							//gõ-gán-save, gõ-gán-save, gõ-gán-save, đến khi gõ Ctrl-S
		//fprintf("%c", ch); 
		fputc(ch, f);
		
	}while(ch != 1); //chưa gõ Ctrl-S thì chưa cho thoát, gõ típ đê
				//19 la ctrl s; 
	fclose(f);
	
	printf("Your document is save to the drive successfully");
}
void openCharsV2(){
	char ch ;	
	FILE* f = fopen("char.txt", "r");	//tao mún tìm chữ $ trên tập tin/đĩa
										//đem nó vào ram, in ra màn hình
										//read/open/input
	printf("The contents of char.txt:\n");
	//đọc in đọc in đọc in cho đến EOF
	
	
	do{
		
		ch = fgetc(f);
		printf("%c", ch); 
	
	}while(ch != EOF);
	
}
void openChars() {
	char ch ;	
	FILE* f = fopen("char.txt", "r");	//tao mún tìm chữ $ trên tâppj tin/đĩa
										//đem nó vào ram, in ra màn hình
										//read/open/input
	printf("The contents of char.txt:\n");
	
	ch = fgetc(f);
	printf("%c", ch); //đọc từ đĩa vào biến ch, in ra màn hình bth
	
	ch = fgetc(f);		//chơi hơi lầy, đọc kí tự đầu tin xong
	printf("%c", ch);	//chuyển qua đọc thg thứ 2
						//hầu hết các hàm fx() là tự động dịch chuyển sang
						//vị trí kế trên tập tin!!! 
	
	
	fclose(f);

	
	
}

void openAChar(){
	char ch ;	
	FILE* f = fopen("char.txt", "r");	//tao mún tìm chữ $ trên tâppj tin/đĩa
										//đem nó vào ram, in ra màn hình
										//read/open/input
	printf("The contents of char.txt:\n");
	
	ch = fgetc(f);
	printf("%c", ch); //đọc từ đĩa vào biến ch, in ra màn hình bth
	
	fclose(f);

	
}
void saveAChar(){
	
	char ch = '$';	
	FILE* f = fopen("char.txt", "a");	
					//a: nối vào đuôi tập tin nếu tập tin đã
					//tồn tại sẵn trước đó với data nào đó	
					
					//nếu chưa tồn tại, thì tạo mới trắng tinh - w
						
					//w: tao sẽ tạo mới 1 tập tin có tên char.txt
					//nếu tập tin này đã tồn tại trước đó, có content riêng
					//tao sẽ xóa sạch, tạo tập tin mới tinh!!! CỰC KÌ NGUY HIỂM
					//KHI CHS "W" MÀ KO CHÚ Ý XEM TẬP TIN NÀY ĐÃ CÓ SẴN CHƯA!!!
					//chưa có - tạo mới; có rồi trc đó, xóa, tạo mới
					//
					//tên tập tin có thể kèm đường dẫn path
					//D:\\music\\char.txt	D:\music\char.txt
	//đúng chuẩn, nếu OS cho phép mình/aoo đc quyền có 1 vùng
	//byte trên đĩa thì f sẽ trỏ vào đầu dãy byte
	//nếu vì 1 lí do nào đó, đĩa đầy, thì ko cho phép trỏ
	//lúc này f trỏ đến 1 giá trị đặc biệt gọi là NULLm lúc này
	//f là NULL, if (f == NULL) nghĩa là éo trỏ đc vào ổ đĩa
	//fprintf(f, "%c", '$');
	fprintf(f, "%c", ch); //cx là $ thoy mà!!!, dùng biến hoặc trực típ
	
	fclose(f);	//đóng tập tin lại
	
	printf("The $ character has been written to the file successfully\n");
	
}
