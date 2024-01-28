#include <iostream>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//insert thêm phần tử vào set
int main(int argc, char** argv) {
	set<int> se;
	se.insert(2);
	se.insert(3);
	se.insert(1);
	se.insert(1);//haha mày trùng!!! bố ếu tính mày nhá
	
	cout << se.size() << endl;
	for(int x : se) {
		cout << x << ' '; 
	}
	for( auto i; )
	return 0;
}