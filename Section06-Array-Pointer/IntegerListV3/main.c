#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5] = {5, -10, -15, 20, -25};

	for(int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
	
	//tên mảng là biến/biến con trỏ/chốt số nhà thg đầu tiên mảng
	//hỏi hari có gì, em có ví, có tọa độ ví. xem ví có gì *hari
	printf("a stores/holds the value: %d\n", a);
	
	//khi tui bt tên mảng là con trỏ, trỏ thg đaàu dãy
	//tui có thể vào nhà thg đầu dãy *hari
	
	printf("a[0] = %d ", *a); //5
	printf("a[1] = %d ", *(a + 1)); //-10

	//sửa value mảng đc ko, dc, sờ đc biến thì duư sức sửa
	//a[1] = 69;
	*(a + 1) = 69; //từ đầu mảng, +1 địa chỉ, 
	//vào địa chỉ đó sửa value a[1] = 69
	
	printf("\nAray after 69\n");
	
	for(int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
	
	//a++;  //a phải lun chốt đầu dãy, a = &a[0];
		  //tên mảng là 1 biến con trỏ/ lưu địa chỉ thg &a[0] 
		  // con trỏ hằng constant
	//chửi lìn, m là con trỏ, ko cho trỏ lung tung!!!
	
	//chơi thử với hari cái coi, con trỏ tự do , trỏ lung tung ++-- thoải mái
	int *hari;
	//hari = ??; //cần 1 địa chỉ ai đó!!! &ai-đó 
	//hari = &a[0]; &a[1];
	
	hari = a; //vì tên mảng chính là địa chỉ &a[0]
	
	//in thử mnagr cái coi, qua HARI
	printf("\nThe array has value (via hari):\n");
	for(int i = 0; i < 5; i++)
		//printf("%d\t", *(hari + i));//hari vẫn chốt dầu mảng như a 
		printf("%d\t", *(hari ++));	//hari trỏ lần lượt...đến đáy mảng 
		//printf("%d\t", *(a + i); //vừa hc hqua và vừa ôn
	
	//hari = a[0]; //reset lại value
		
	//tin dc ko sau khi for xog, hari phần tử cúi, tin hg
	printf("\nBElieve or not? Hari now points to : %u\n", --hari); // đoạn trc ++ nên địa chỉ đg lố 1 giá trị
	printf("BElieve or not? The last element of array : %d\n", *hari);
	//-25
	
	
	return 0;
}