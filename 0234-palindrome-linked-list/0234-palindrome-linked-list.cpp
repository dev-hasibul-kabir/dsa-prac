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

     void insertAtTail(ListNode *&head, ListNode *&tail, int val){
     ListNode *newNode = new ListNode(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     tail = tail->next;
 }

  void reverseList(ListNode *&head, ListNode *curr){

     if(curr == NULL)return;
     if(curr->next == NULL){
        head = curr;
        return;
     }

     reverseList(head, curr->next);
     curr->next->next = curr;
     curr->next = NULL;

 }
    bool isPalindrome(ListNode* head) {
      ListNode *newHead = NULL;
      ListNode *newTail = NULL;

      ListNode *temp = head;
     while(temp != NULL){
        insertAtTail(newHead, newTail, temp->val);
        temp = temp->next;
     }

    reverseList(newHead, newHead);

    while(head != NULL){
        if(head->val != newHead->val){
            return false;
        }
        head = head->next;
        newHead = newHead->next;
     }
     return true;
    }
};