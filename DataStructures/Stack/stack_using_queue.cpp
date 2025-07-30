#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    queue<int> myQueue;

public:
    void push(int val) {
        myQueue.push(val);
    }

    int pop() {
        int last;
        queue<int> newQueue;

        while (!myQueue.empty()) {
            if (myQueue.size() == 1) {
                last = myQueue.front();
                myQueue.pop();
                break;
            }
            newQueue.push(myQueue.front());
            myQueue.pop();
        }
        myQueue = newQueue;
        return last;
    }

    int top() {
        int last;
        queue<int> newQueue;

        while (!myQueue.empty()) {
            if (myQueue.size() == 1) {
                last = myQueue.front();
            }
            newQueue.push(myQueue.front());
            myQueue.pop();
        }
        myQueue = newQueue;
        return last;
    }

    int size() {
        return myQueue.size();
    }

    bool empty() {
        return myQueue.empty();
    }
};

int main() {
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
