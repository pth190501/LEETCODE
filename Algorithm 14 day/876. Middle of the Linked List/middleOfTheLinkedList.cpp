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
    ListNode* middleNode(ListNode* head) {
        int count=1;
        ListNode*  node= new ListNode;
        node=head;
        while(node->next!=NULL){
            node = node->next;
            count++;
        }
        count/=2;
        ListNode*  nodeans= new ListNode;
            nodeans=head;
           while(count!=0 ){
            nodeans = nodeans->next;
               count--;
        }
        return nodeans;        
    }
};