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
	stack<int> st;


	void count(ListNode* head, int& i) {
		if (head == nullptr) {
			return;
		}

		count(head->next, i);
		i++;;

	}


	bool palindrom(ListNode* head, int i) {

		if (i % 2 == 1) {
			i = i / 2;

			while (i--) {

				st.push(head->val);
				head = head->next;

			}
			head = head->next;
			int stacksize = st.size();
			for (int k = 0; k < stacksize; k++) {
				if (st.top() != head->val) {
					return false;
				}
				else {
					st.pop();
					head = head->next;
				}
			}


		}
		else {
			i = i / 2;

			while (i--) {
				std::cout << "i" << i << std::endl;
				st.push(head->val);
				std::cout << head->val << std::endl;
				head = head->next;

			}
			std::cout << st.size() << std::endl;
			int stacksize = st.size();
			for (int k = 0; k < stacksize; k++) {
				if (st.top() != head->val) {
					std::cout << st.top() << ":" << head->val << std::endl;
					return false;
				}
				else {
					std::cout << st.top() << "::" << head->val << std::endl;
					st.pop();
					head = head->next;
				}
			}

		}



		return true;

	}



	bool isPalindrome(ListNode* head) {

		if (head == nullptr) {
			return true;
		}
		if (head != nullptr && head->next == nullptr) {
			return true;
		}

		int i = 0;
		count(head, i);
		std::cout << "i:" << i << std::endl;

		return palindrom(head, i);
	}




};