class MyQueue {
public:
stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
         st.push(x);
    }
    
    int pop() {
         stack<int> newSt;
        while(!st.empty()){
            newSt.push(st.top());
            st.pop();
        }
     int front = newSt.top(); // save front
     newSt.pop(); //pop out front

      // Restore rest to original stack
      while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
      }

      return front;
    }
    
    int peek() {
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
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */