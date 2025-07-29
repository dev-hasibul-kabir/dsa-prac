class MyStack {

private:
    queue<int> myQueue;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        myQueue.push(x);
    }
    
    int pop() {
        int last;
        queue<int> newQueue;

        while(!myQueue.empty()){

                 if(myQueue.size() == 1){
                        last = myQueue.front(); //store popped out value
                    break;
                }
                //store rest values to another queue
                newQueue.push(myQueue.front());
            myQueue.pop();

        }
         //update the main queue
        myQueue = newQueue;
        return last;
    }
    
    int top() {
         int last;
        queue<int> newQueue;

        while(!myQueue.empty()){

                 if(myQueue.size() == 1){
                        last = myQueue.front();
                }
                newQueue.push(myQueue.front());
            myQueue.pop();

        }
        myQueue = newQueue;
        return last;
    }
    
    bool empty() {
        return myQueue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */