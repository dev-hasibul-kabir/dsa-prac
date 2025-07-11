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

int main(){
    Node *head = NULL;
    int n;
    int el;

    cout << "Enter the list size: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter value " << i+1 << ": ";
        cin >> el;

        insert_at_tail(head, el);
    }


    cout << "Linked List-" << endl;
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}
