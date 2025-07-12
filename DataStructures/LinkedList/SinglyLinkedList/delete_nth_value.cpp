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

void delete_nth_el(Node *&head, int pos){
      if (head == NULL) return;
    if(pos == 1){
        Node *temp = head;
        head = head->next;
     delete temp;
     return;
    }
    Node *temp = head;

    for(int i = 1; i < pos-1; i++){
        temp = temp->next;

    }
     Node *nth_node = temp->next;
     temp->next = temp->next->next;
     delete nth_node;

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



    //Delete n'th node
    cout << "Enter the position to delete: ";
    cin >> n;
    delete_nth_el(head, n);

      print_list(head);




    return 0;
}
