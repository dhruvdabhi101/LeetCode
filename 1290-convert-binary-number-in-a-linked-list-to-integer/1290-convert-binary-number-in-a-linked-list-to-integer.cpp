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
    int getDecimalValue(ListNode* head) {
        ListNode *p = head;
        int count = 0 ;
        while(p != NULL && p->next != NULL){
            count++;
            p = p-> next;
        }
        p = head ;
        int ans = 0;
        while(p != NULL){
            ans += (p->val * pow(2,count--));
            p = p-> next ;
        }
        return ans;
    }
};