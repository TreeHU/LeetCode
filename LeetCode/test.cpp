#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int cnt = 0;
int copynum = 0;
int rec(int num) {
	
	cout << num << endl;
	if (num == 1) {
		int copynum = cnt;
		cnt = 0;
		return copynum;
	}
	if (num % 2) {
		num = 3 * num + 1;
		cnt++;
	}
	else {
		num = num / 2;
		cnt++;
	}

	return rec(num);
}

bool cmp(int a, int b) {
	if (rec(a) == rec(b)) {
		return a < b;
	}
	return rec(a) < rec(b);
}


int main(void) {
	vector<int> v(5);
	
	
	iota(v.begin(), v.end(),7);
	
	cout << "sort Àü:" << endl;
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it <<" ";
	}
	cout << "" << endl;
	cout << "sort ÈÄ:" << endl;
	sort(v.begin(), v.end(), cmp);
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}

	//cout <<"rec(12): "<< rec(12) << endl;
	//cout << "rec(13): " << rec(13) << endl;



	return 0;
}