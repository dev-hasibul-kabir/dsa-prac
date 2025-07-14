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

void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = tail->next;
}

void print_list(Node *head){
    cout << "Linked List-" << endl;
    while(head != NULL){
        cout << head->value << endl;
        head = head->next;
    }

}
int main(){
      Node *head = NULL;
      Node *tail = NULL;
    int n;
    int val;

    cout << "Enter the list size: ";
    cin >> n;

    // Insert at the last position
    for(int i = 0; i < n; i++){
        cout << "Enter value " << i+1 << ": ";
        cin >> val;

        insert_at_tail(head, tail, val);
    }
    print_list(head);
return 0;
}
