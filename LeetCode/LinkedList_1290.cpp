/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//Ç®ÀÇ
class Solution {
public:
	vector<int> v;
	int getDecimalValue(ListNode* head) {
		int ans = 0;
		int sum = 0;
		while (head != NULL) {
			ans = (ans * 2) + head->val;

			head = head->next;
		}

		return ans;
	}
};