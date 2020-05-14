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
	ListNode* result;


	void countNode(ListNode* head, int& cnt) {
		while (head) {
			head = head->next;
			cnt++;
		}
	}

	void insert(ListNode*& head) {
		result->val = head->val;
		result = head->next;
	}



	void resultNode(ListNode*& head) {
		int cnt = 0;
		countNode(head, cnt);
		std::cout << "cnt: " << cnt << std::endl;
		cnt = cnt / 2 + 1;
		int start = 1;
		ListNode* curr = head;

		while (head) {
			if (start = cnt) {
				curr = curr->next;
				insert(curr);
				start++;

			}
			else {
				start++;
				curr = curr->next;
			}


		}

	}



	ListNode* middleNode(ListNode* head) {

		//     ListNode * newnode = nullptr;
		resultNode(head);

		return result;
	}
};