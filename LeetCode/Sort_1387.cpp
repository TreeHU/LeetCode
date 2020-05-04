/* 풀의

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

/* 풀의 1
int cnt =0;

int rec(int num){
    if(num == 1){
        int copynum = cnt;
        cnt =0;
        return copynum;
    } 
    
    if(num % 2){
      num = 3 * num +1;
      cnt++;
    }else{
            num = num / 2;
            cnt++;
    }

   return rec(num);       
}

bool cmp(int a, int b){
    if(rec(a) == rec(b)){
           return a < b;
    }
       return rec(a) < rec(b);
}

class Solution {
public:
	//int array[1000] = { -1 };
    
    
	int getKth(int lo, int hi, int k) {
       // memset(array, -1, sizeof(array)/sizeof(int));
        vector<int> v(hi - lo +1);
		if (lo == hi) {
			return lo;
		}
        iota(v.begin(),v.end(),lo);
         std::cout  << " sort 전:"<< std::endl;
        
      for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
            std::cout  << *it << std::endl;
        }        
        std::cout  << " sort 후:"<< std::endl;
        sort(v.begin(),v.end(),cmp);
        
      for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
            std::cout << *it << std::endl;
        }
        
        
		return v[k-1];
	}
};
*/