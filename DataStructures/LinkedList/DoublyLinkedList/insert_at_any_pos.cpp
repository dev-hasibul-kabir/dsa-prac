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

 void insert_at_any_pos(Node *&head, int pos, int val){
     Node *new_node = new Node(val);

     if(pos == 1){
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
        return;
     }

     Node *temp = head;
     for(int i = 1; i < pos-1; i++){
        temp = temp->next;
     }

     if(temp->next == NULL){
        temp->next = new_node;
        new_node->prev = temp;
        return;
     }

     new_node->prev = temp;
     new_node->next = temp->next;
     temp->next->prev = new_node;
     temp->next = new_node;
 }

 void print(Node *head){
     Node *temp = head;
     while(temp != NULL){
            cout << temp->value << " ";
        temp = temp->next;
     }
 }



int main(){
    int list_size;
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
    insert_at_any_pos(head,6, 50);
    print(head);
return 0;
}

