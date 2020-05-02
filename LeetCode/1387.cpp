/* Ç®ÀÇ

class Solution {
public:

	//map< int, int> mp;
	int array[1000] = { -1 };
	vector<int> ss;
	int min = 0;

	int getKth(int lo, int hi, int k) {
		if (lo == hi) {
			return lo;
		}
		for (int i = lo; i <= hi; i++) {
			int cnt = 0;
			while (i != 1) {
				if (i % 2) {
					i = i * 3 + 1;
				}
				else {
					i = i / 2;
				}
				cnt++;
			}
			array[i] = cnt;

		}
		for (int i = 0; i < hi - lo + 1; i++) {
			for (int i = lo; i <= hi; i++) {
				if (array[i] != -1) {
					if (array[i] < array[i + 1]) {
						min = i;
					}
					else if (array[i] == array[i + 1]) {
						min = i;
					}
				}
			}
			if (i == k - 1) {
				return min;
			}
			array[min] = -1;

		}

		return 0;
	}
};
*/