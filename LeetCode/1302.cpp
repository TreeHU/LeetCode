//Tree



/*풀의
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };

class Solution {
public:

	map<int, int> mp;
	//값 , 깊이


	int height(TreeNode* node, int depthp) {

		if (node != nullptr) {
			depthp++;
		}

		return depthp;
	}


	void traverse(TreeNode* node, int depth) {

		if (node == nullptr) return;
		if (node->left == nullptr && node->right == nullptr) {
			mp.insert(make_pair(node->val, depth));
			std::cout << "node->val:" << node->val << "," << depth << endl;

			return;
		}
		int heighnum = height(node, depth);
		traverse(node->left, heighnum);
		traverse(node->right, heighnum);

	}




	int deepestLeavesSum(TreeNode* root) {
		int depth = 0;
		if (root == nullptr) return 0;
		traverse(root, depth);

		int maxdepth = 0;
		int result = 0;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			if (it->second > maxdepth) {
				maxdepth = it->second;
			}
		}
		for (auto it = mp.begin(); it != mp.end(); it++) {
			if (it->second == maxdepth) {
				result += it->first;
			}
		}


		return result;
	}
};

*/


//해설


class Solution {
public:



	int height(TreeNode* node) {
		if (node == nullptr) return 0;

		return max(height(node->left), height(node->right)) + 1;
	}


	void traverse(TreeNode* node, int depth, int& sum, int counter) {

		if (node == nullptr) return;

		++counter;
		if (counter == depth) sum += node->val;

		traverse(node->left, depth, sum, counter);
		traverse(node->right, depth, sum, counter);

	}


	int deepestLeavesSum(TreeNode* root) {
		int depth = 0;
		int counter{ 0 };
		int sum{ 0 };
		if (root == nullptr) return 0;

		depth = height(root);
		traverse(root, depth, sum, counter);


		return sum;
	}
};




