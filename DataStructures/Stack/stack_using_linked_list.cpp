#include<bits/stdc++.h>

using namespace std;

struct Node{
public:
    Node *next;
    Node *prev;
    int val;

     Node(int value){
        this->prev = NULL;
        this->val = value;
        this->next = NULL;
    }
};
class myStack{
private:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
public:
    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop(){
        sz--;
         Node *temp = tail;
        if(tail->prev == NULL){
            head=NULL;
            delete head;
            return;
        }
        tail->prev->next = NULL;
        tail = tail->prev;
        temp = NULL;
        delete temp;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0)return true;
        else return false;
    }

};

int main(){
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //print values by popping out
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

return 0;
}

