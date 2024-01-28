#include <stdio.h>
#include <stdlib.h>

//in ra số có 3 chữ số, in tổng của các số chẵn //143 125 432
int main(int argc, char *argv[]) {
	
	for(int i = 100; i < 1000; i++)
		{
			int hundred = i / 100; //lấy ra phần số nguyên trước ,
			int dozens = (i % 100) / 10;	//lấy ra phần dư từ hàng chục sau đó /10 để bỏ đi phần đơn vị(dư) phía sau
			int unit = i % 10;	//lấy đi phần dư của số vidu 123 chia lấy dư cho 10 = 12, 3 ta lấy số 3 đóa
			if ((hundred + dozens + unit)  % 2 == 0)
				printf("%d ", i);			
		
			
			
			
		}
		

	
	
	return 0;
}