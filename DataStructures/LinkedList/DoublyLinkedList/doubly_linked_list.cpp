#include<bits/stdc++.h>
using namespace std;

 struct Node{
 public:
    Node *prev;
    int value;
    Node *next;

    Node(int value){
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
 };

 void print(Node *head){
     Node *temp = head;
     while(temp != NULL){
            cout << temp->value << " ";
        temp = temp->next;
     }
 }

  void print_reverse(Node *tail){
     Node *temp = tail;
     while(temp != NULL){
            cout << temp->value << " ";
        temp = temp->prev;
     }
 }

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    Node *tail = b;

    print(head);
    cout << endl;
    print_reverse(tail);

return 0;
}
