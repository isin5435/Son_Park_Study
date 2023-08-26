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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
	ListNode* ans;
	ListNode* head = new ListNode(0);
	ListNode* tail = head;

	int carry = 0;
	while ((l1 != nullptr) || (l2 != nullptr) || (carry != 0))
	{
		int a1 = (l1 != nullptr) ? l1->val : 0;
		int a2 = (l2 != nullptr) ? l2->val : 0;

		int sum = a1 + a2 + carry;
		carry = sum / 10;
		sum = sum % 10;

		ListNode* temp = new ListNode(sum);
		tail->next = temp;
		tail = tail->next;

		l1 = (l1 != nullptr) ? l1->next : nullptr;
		l2 = (l2 != nullptr) ? l2->next : nullptr;


	}

	ans = head->next;
	delete head;

    return ans;
    }
};