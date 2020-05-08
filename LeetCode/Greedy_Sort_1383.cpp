class Solution {
public:
	int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {

		vector<pair<int, int>> values;
		for (int i = 0; i < n; i++) {
			values.emplace_back(efficiency[i], speed[i]);
		}
		sort(values.begin(), values.end(), greater<pair<int, int>>());


		long long res = 0;
		long long speedSum = 0;
		priority_queue<int> Q;
		for (int i = 0; i < n; i++) {
			speedSum += values[i].second;
			res = max(res, speedSum * values[i].first);
			Q.push(-values[i].second);
			if (Q.size() == k) {
				speedSum += Q.top();
				Q.pop();
			}
		}
		return res % 1000000007;

	}
};

//speed는 minhead으로 처리