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
void remove_elements(ListNode *&head, int val){

    while(head != NULL && head->val == val) {
        ListNode* to_delete = head;
        head = head->next;
        delete to_delete;
    }

    ListNode* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->next->val == val) {
            ListNode* to_delete = temp->next;
            temp->next = temp->next->next;
            delete to_delete;
        } else {
            temp = temp->next;
        }
    }

}
    ListNode* removeElements(ListNode* head, int val) {
     remove_elements(head, val);
     return head;
    }
};