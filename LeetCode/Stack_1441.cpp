class Solution {
public:

	stack<int> st;
	stack<int> rst;
	vector<string> ans;

	vector<string> buildArray(vector<int>& target, int n) {

		for (int i = n; i > 0; i--) {
			st.push(i);
		}

	
		int k = 0;
		while (!st.empty()) {
			if (k == target.size()) {
				return ans;
			}
			if (st.top() == target[k]) {
				ans.push_back("Push");
				st.pop();
				k++;
			}
			else {
				ans.push_back("Push");
				ans.push_back("Pop");
				st.pop();
			}
		}






		return ans;
	}
};