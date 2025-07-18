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

void insert_last_tracking_tail(Node *&head, Node *&tail, int val){
    Node *new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void delete_at_any_pos(Node *&head){
    int pos;
    cout << endl << "Enter position to delete:";
    cin >> pos;
    Node *temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }

    //delete first
     if(temp->prev == NULL){
        temp->next->prev = NULL;
        head = temp->next;
        delete temp;
     return;
    }

    //delte last
    if(temp->next == NULL){
        temp->prev->next = NULL;
        delete temp;
        return;
    }

   // delete anywhere else
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;

}

void print(Node *head){
     Node *temp = head;
     while(temp != NULL){
            cout << temp->value << " ";
        temp = temp->next;
     }
 }

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    Node *tail = c;

    int val;
    while(true){
        cout << "Enter value to insert:";
        cin >> val;
        if(val == -1) break;
        insert_last_tracking_tail(head, tail, val);
    }
     print(head);

    delete_at_any_pos(head);

    cout << endl;
    print(head);
    return 0;
}
