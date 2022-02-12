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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	ListNode *node, *ans, *temp;
	if (list1==NULL || list2==NULL) return list1!=NULL ? list1 : list2;
	if (list1->val < list2->val) {
		node = new ListNode(list1->val);
		list1 = list1->next;
	} else {
		node = new ListNode(list2->val);
		list2 = list2->next;
	}
	ans = node;


	while (list1 && list2) {
		if (list1->val < list2->val) {
			node->next = new ListNode(list1->val);
			list1 = list1->next;
		} else {
			node->next = new ListNode(list2->val);  
			list2 = list2->next;
		}
		node = node->next;
	}
	while (list1) {
		node->next = new ListNode(list1->val);
		list1 = list1->next;
		node = node->next;
	}
	while (list2) {
		node->next = new ListNode(list2->val);
		list2 = list2->next;
		node = node->next;
	}

	return ans;
}
};