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
private:
    ListNode *recurse(ListNode *node, int &n) {
        if (!node) return nullptr;
        
        node->next = recurse(node->next, n);
        n--;
        if (n == 0) return node->next;
        return node;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;
        
        return recurse(head, n);
    }
};