#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
	//Version 1; khai báo vector trước rồi mới nhập n
	
	///Khi khai báo như này ta phải cho v rỗng trước
	//tiếp đó mỗi lần for thì ta khai báo biến tạm để lưu giá trị 
	// i vừa nhập rồi mới đẩy vào (mảng)Vector
	//Cách này ko tối ưu lắm!!!
//	vector<int> v;
//	int n; 
//	printf("Moi ban nhap N: ");
//	cin >> n;
//	for(int i = 0; i < n; i++) {
//		int temp; cin >> temp;
//		v.push_back(temp);
//	}
//	printf("Vecto ban vua nhap: ");
//	for(int x : v)	
//		cout << x << ' ';
	
	//Version 2: Ta nhập n trước, sau đó khai báo Vector chứa n phần tử
	//V(n)
	//Cách này vừa nhanh vừa tiện, ko cần phải có biến tạm
	//ko cần phải đẩy(push) biến temp vào mảng v
//	int n; cin >> n;
//	vector<int> v(n); //v chứa n phần tử vừa nhập
//	for(int i = 0; i < n; i++)
//		cin >> v[i];
//	for( int x : v)
//		cout << x << ' ';
	
	//Version 3: Đưa vị trí phần i vào trong Vector
	//mỗi lần for ta đưa hay ta đẩy vị trí i đó vào trong
	//Vector(rỗng) ta khai báo
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
//	v.insert(v.begin() + 2, 200);
//	for(int x : v)
		cout <<  x << ' ';

	
	//vector<int>::iterator it = v.begin();
	auto it = v.begin();
	auto x = 100; //int
	auto y = '@'	//char
	//auto z; m  ko cho t lay di t biet
	for(auto x : v) {
		cout << x << ' ';
	}
	
	return 0;
}