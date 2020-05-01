class Solution {
public:
	bool compare(int a, int b) {
		return a > b;
	}


	vector<int> minSubsequence(vector<int>& nums) {
		int sum = 0;
		int temp = 0;
		vector<int> result;

		for (int num : nums) {
			sum += num;
		}
		std::cout << sum << std::endl;
		sort(nums.rbegin(), nums.rend());

		for (int i = 0; i < nums.size(); i++) {
			std::cout << nums[i] << std::endl;
		}


		for (int num : nums) {


			temp += num;
			result.push_back(num);

			sum -= num;
			if (temp > sum) {
				return result;
			}
		}

		return result;
	}
};