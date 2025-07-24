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
 void reverse_list(ListNode *&head, ListNode *curr){
    if(curr == NULL)return;
     if(curr->next == NULL){
            head=curr;
        return;
     }
     reverse_list(head, curr->next);

     curr->next->next = curr;
     curr->next = NULL;
 }

    ListNode* reverseList(ListNode* head) {
        reverse_list(head, head);
        return head;
    }
};