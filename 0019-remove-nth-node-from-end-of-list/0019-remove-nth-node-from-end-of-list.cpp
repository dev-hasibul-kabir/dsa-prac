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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode *curr = head;
    int sz = 0;
    while(curr != NULL){
        sz++;
        curr = curr->next;
    }


    if(sz-n == 0){
        ListNode *to_delete = head;
        head = head->next;
        delete to_delete;
        return head;
    }

    curr = head;
    for(int i = 1; i < sz-n; i++){
            curr = curr->next;
    }
     ListNode *to_delete = curr->next;
     curr->next = curr->next->next;
     delete to_delete;

   return head;
    }
};