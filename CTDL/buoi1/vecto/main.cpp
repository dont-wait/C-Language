#include <iostream>
#include <vector>
using namespace std;
//push_back
//foreach : Range base for loop (C++ 11)
int main(int argc, char** argv) {
	vector<int> v(3, 100); // {100, 100, 100} //nếu không khai báo thì mặc định nó là giá trị 
	v.push_back(3); //{100, 100, 100, 3}	  //rác
	v.push_back(2);	//{3, 2}
	v.push_back(1);	//{3, 2, 1}
	v.push_back(5);	//{3, 2, 1, 5}
//	cout << v.size() << endl;
//	//cout << v[2] << endl; 
//	for(int i = 0; i < v.size(); i++)
//		cout << v[i] << ' ';
//	cout << endl;
//	for (int i = v.size() - 1; i >= 0; i--)
//		cout << v[i] << ' ';
//	int a[5] = {3, 1, 2, 4, 5};
//	for(int &x: v){
//		x = 1000;
//	}//ko lam thay doi gia tri trong vecto
////	for(int i = 0; i < v.size(); i++)
////		v[i] = 1000; //chi? nhu* nay` moi lam thay doi vecto
//	for(int x: v) {
//		cout << x << ' ';
//	}
	vector<int>::iterator it = v.begin(); //trỏ vào phần tử đầu tiên trong mảng 
	for(it = v.begin(); it != v.end(); it++)	//vector
		cout << *it << ' '; 
	
	vecto<int>::iterator it = v.begin() + 4; //v[4]
	cout << *it <<endl;
	return 0;
}