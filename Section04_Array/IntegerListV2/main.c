#include <stdio.h>
#include <stdlib.h>

//nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10
//có xh trong mảng hay ko
//IPO
//I: cần 10 biến
//P: Lôi từng biến ra hỏi value == 10 hok, có thì kết luận
//O in ra có hay ko

int main(int argc, char *argv[]) {
	int a[] = {1, 6, 100, 34, 1000, -11, 88, 0, 33, 100};
	//nên nhớ ta có đến 10 biến lận a[0] ...
	//					bình đẳng mọi biến int khác int yob;
	//duyệt mảng, quét từ đầu đến cuối
	for(int i = 0; i < 10; i++){
		if (a[i]== 10){
			printf("Hey, Found 10 at position of %d\n", i);
			break;//thoát sớm khi tìm thấy
		}
		else
			printf("Not found\n");
	}//logic làm sao in đc 1 câu ko thấy
	//chứ ko in nhìu câu!!!
	//KHI NÀO ĐC QUYỀN KQ KO THẤY
	//SO SÁNH HẾT RÒI MÀ KO THẤY == 10 MỚI ĐC KẾT LUẬN
	//TÌM BẰNG CHỨNG RỒI MS KẾT LUẬN
	//BIẾN CỜ - FLAG NGUYÊN TẮC SUY ĐOÁN VÔ TỘI
	//giả bộ rằng 10 ko xh từ đầu tiên
	//đi hỏi phần tử 1, m có == 10 ko, dạ ko, GIẢ BỘ VẪN ĐG ĐÚNG
	//đi hỏi phần tử 2, m có == 10 ko, dạ ko
	//đi hỏi phần tử i, m có == 10 ko, dạ có, CHết mm:))
	//CỜ PHẤT LÊN, KO HỎI NX, BREAK;, TÌM THẤY RỒI
	//LM DÌ?
	//QUY ƯỚC: CỜ = 0 ; KO TÌM THẤY
	//			CỜ = 1; TÌM THẤY EM 10	
	//KỸ THUẬT ĐẶT CỜ CHS VS NHIỀU DỮ LIỆU
	//TA GIẢ ĐỊNH 1 ĐIỀU J ĐÓ TỪ BAN ĐẦU
	//SẼ PHẤT KHI DÂTA CÓ ĐIỀU J ĐẶC BIỆT!!!
			
			
	return 0;
}