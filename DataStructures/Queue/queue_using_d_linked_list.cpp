#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    Node *next;
    Node *prev;
    int val;

    Node(int value){
        this->val = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

//FIFO
class MyQueue{
private:
    Node *head = NULL;
    Node *tail = NULL;

public:
    int sz = 0;
   void push(int val){
       sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail  = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

    }
  void  pop(){
      sz--;
        if(head == NULL)return;
        if(head->next == NULL){
         delete head;
          head = NULL;
          tail = NULL;
         return;
        }
        Node *to_delete = head;
        head->next->prev = NULL;
        head = head->next;
        delete to_delete;

    }

   int peek(){
        return head->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(size()==0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    MyQueue mq;

    mq.push(10);
    mq.push(20);
    mq.push(30);
    mq.push(40);

    //popping out first value
    while(!mq.empty()){
        cout << mq.peek() << endl;
             mq.pop();
    }


return 0;
}
