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
class Solution {
public:
	//     // case1
	//     ListNode * head1 = new ListNode(0);
	//     ListNode * pp = new ListNode(0);

	//     pp = head1;


		//case 2
	ListNode* head1 = new ListNode(0);
	ListNode* pp = head1;


	// curr->next = head1;
	int cnt = 0;
	void ans(ListNode* node) {
		if (node == nullptr) {
			return;
		}

		ans(node->next);
		if (cnt == 0) {
			head1->val = node->val;
			cnt = -1;
		}
		else {
			std::cout << node->val << std::endl;
			ListNode* curr = new ListNode(node->val);
			pp->next = curr;
			pp = curr;

		}
	}



	ListNode* reverseList(ListNode* head) {

		if (head == nullptr) {
			return nullptr;
		}
		else {
			ans(head);
		}

		return head1;
	}


};