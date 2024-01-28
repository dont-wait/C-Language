#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
	pair<int, int> p = make_pair(10, 20); // st, nd
//	pair<int, long> p;
//	pair<char, int> p;
	cout << p.first << ' ' << p.second << endl;
	
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	vector<pair<int, int>> v;
	
	pair<int, pair<int, int>> v;
	p.first = 10;
	p.second.first = 20;
	p.second.second = 30;	//{10, {20, 30}}
	pair<int, vector<int>> p;
	return 0;
}