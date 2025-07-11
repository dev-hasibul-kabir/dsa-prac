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

void insert_at_tail(Node *&head, int el){
    Node *new_node = new Node(el);

    if(head == NULL){
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_at_any_pos(Node *&head, int pos, int el){
    Node *new_node = new Node(el);
        if(pos == 1){
        new_node->next = head;
        head = new_node;
        return;
    }
    Node *temp = head;
    for(int i = 1; i < pos-1; i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}

void print_list(Node *head){
    cout << "Linked List-" << endl;
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << endl;
        temp = temp->next;
    }

}

int main(){
    Node *head = NULL;
    int n;
    int el;

    cout << "Enter the list size: ";
    cin >> n;

    // Insert at the last position
    for(int i = 0; i < n; i++){
        cout << "Enter value " << i+1 << ": ";
        cin >> el;

        insert_at_tail(head, el);
    }
    print_list(head);


    //Insert at any position of the list
    int pos;
     cout << "Enter the position to insert: ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> el;
    insert_at_any_pos(head, pos, el);
    print_list(head);

    return 0;
}
