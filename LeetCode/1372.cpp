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
 */
class Solution {
public:

	int result;


	void traverse(TreeNode* node, int flag, int count) {
		if (node == nullptr) {

			result = max(count, result);
			return;
		}
		if (flag) {
			traverse(node->right, 0, count + 1);
		}
		else {
			traverse(node->right, 0, 0);
		}

		if (flag) {
			traverse(node->left, 1, 0);
		}
		else {
			traverse(node->left, 1, count + 1);
		}


	}


	int longestZigZag(TreeNode* root) {
		int depth = 0;
		int left = 1;
		int right = 0;
		int count = 0;



		result = 0;


		traverse(root->left, left, count);
		traverse(root->right, right, count);

		return result;
	}
};