#include <stdio.h>
#include <stdlib.h>
//int yob = 2002; //oke
int yob; //= 2002 ; //yob là biến toàn cục, global, hàm nào cx sờ đc
//lát hồi phải có hàm nào đó gán yob = ???

//yob = 2002; //sai nhen!!! ko bt lm sao để CPU chạm vào

//CPU chỉ bắt đầu từ main() trong main() sẽ có hàm nào đó dc gọi
//lệnh nằm trog hàm, hàm trong main(), main() là hàm đặc biệt
//nơi cuộc chs bắt đầu!!!


//bài lẻ, hiểu kiến thức lí thuyết. Bài này minh họa cái khái
//niệm scope của 1 biếnm tức lầt đứng ở đâu thì ta mới sờ đc
//biến. chỗ nào thì biến bị che khuất/ ko thấy - local và global
//liên quan đến scope
void printYob();

void printLatestYob();

int main(int argc, char *argv[]) {
	
	printf("in main(), yob is %d\n", yob); //o nác
	//yob = 2002;
	// gọi hàm
	//printYob();
	//printLatestYob();
	//0 0 2010 2022 2022
	
	//gọi hàm
	printLatestYob(); // 0 2022 2022 2010 2010
	printYob();
	
	//hàm gọi xog, main() lm típ, hỏi xem yob là máy
	printf("in main(), after calling printYob, yob finally is %d\n", yob); 
	
	return 0;
}
//0 0 2010 2022 2022
void printYob(){
	printf("in printYob(), yob is %d\n", yob);
	yob = 2010;
	printf("in printYob(), after updating yob, yob now is %d\n", yob);
}
void printLatestYob(){
	yob = 2022;
	printf("in printLatestYob(), after updating yob, yob now is %d\n", yob);
}