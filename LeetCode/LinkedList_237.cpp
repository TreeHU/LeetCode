/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//ÇØ¼³
class Solution {
public:


	ListNode* head;

	void deleteNode(ListNode* node) {
		node->val = node->next->val;
		node->next = node->next->next;

	}
};