#include <stdio.h>
#include <conio.h>

//Tính tiền điện
//Bậc 1 (1-100KW) : 5$/1KW
//Bậc 2 (101-150KW) : 7$/1KW
//Bậc 3 (151-200KW) : 10$/1KW
//Bậc 4 (201-300KW) : 15$/1KW
//Bậc 5 (300KW trở lên) : 20$/1KW
int main(int argc, char *argv[]) {
	int soDien; int b1 = 5, b2 = 7, b3 = 10, b4 = 15, b5 = 20;
	int tienDien;
	printf("======================================\n");
	printf("DAY LA CT TINH TIEN DIEN CUA BAN     =\n");
	printf("Moi ban nhap so dien de toi tinh     =\n");
	printf("Bac 1 (1-100KW) : 5$/1KW             =\n"); 
	printf("Bac 2 (101-150KW) : 7$/1KW           =\n"); 
	printf("Bac 3 (151-200KW) : 10$/1KW          =\n"); 
	printf("Bac 4 (201-300KW) : 15$/1KW          =\n"); 
	printf("Bac 5 (300KW tro len) : 20$/1KW      =\n");
	do
	{
		printf("Moi nhap: ");
		scanf("%d", &soDien); 
		if (soDien < 1)
			printf("Moi ban nhap lai!!!\n");
		else
		{
			if (soDien <=100) //số điện khi tới bậc 1
				tienDien = soDien * b1;
			else if (soDien <=150) //số điện khi tới bậc 2
				tienDien = 100 * b1 + (soDien - 100) * b2; 	 		
			else if (soDien <= 200) //số điện khi tới bậc 3
				tienDien = 100 * b1 + 50 * b2 + (soDien - 150) * b3;
			else if (soDien <= 300) //số điện khi tới bậc 4
				tienDien = (100 * b1) + (50 * b2) + (50 * b3) + ((soDien - 200) * b4);
			else if (soDien >= 300)
				tienDien = (100 * b1) + (50 * b2) + (50 * b3) + (100 * b4) + ((soDien - 300) * b5);
			printf("Tien dien ban can phai tra la: %d$   =", tienDien);			
	
		}
	}while(soDien < 1 );
	printf("\n======================================\n");

	getch();
	return 0;
}
