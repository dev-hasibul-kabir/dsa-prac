#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};

void print_list(Node *head){
     Node *temp = head;
     while(temp != NULL){
            cout << temp->value << " ";
        temp = temp->next;
     }
 }

int getLength(Node* head) {

    int length = 0;

    while (head) {
        length++;
        head = head->next;
    }

    return length;
}


void getMiddle(Node* head) {

    int length = getLength(head);

    int mid_node = length / 2;

    for(int i = 0; i < mid_node; i++){
        head = head->next;
    }
    cout << "Middle Node:"<< head->value;
}

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_list(head);
    getMiddle(head);

    return 0;
}
