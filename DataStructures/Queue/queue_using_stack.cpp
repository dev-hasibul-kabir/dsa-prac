#include<bits/stdc++.h>
using namespace std;

class MyQueue{

public:
    stack<int> st;
    void push(int val){
        st.push(val);
    }
    void pop(){
        stack<int> newSt;
        while(!st.empty()){
            newSt.push(st.top());
            st.pop();
        }

      newSt.pop(); //pop out front

      // Restore rest to original stack
      while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
      }

    }
    int peek(){
        stack<int> newSt;
        while(!st.empty()){
            newSt.push(st.top());
            st.pop();
        }
     int front = newSt.top(); //  front of queue

    // Restore original stack
    while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
    }

    return front;

    }
    int size(){
        return st.size();
    }
    bool empty(){
        return st.empty();
    }
};

int main(){
    MyQueue mq;
    mq.push(20);
    mq.push(30);
    mq.push(40);
    mq.push(50);

    while(!mq.empty()){
        cout << mq.peek() << endl;
        mq.pop();
    }

    return 0;
}
