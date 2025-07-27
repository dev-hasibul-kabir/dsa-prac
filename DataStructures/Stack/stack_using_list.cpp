#include<bits/stdc++.h>

using namespace std;

class myStack{
private:
    list<int> ls;
public:
    void push(int val){
        this->ls.push_back(val);
    }
    void pop(){
        this->ls.pop_back();
    }
    int top(){
        return this->ls.back();
    }
    int size(){
        return this->ls.size();
    }
    bool empty(){
        if(this->ls.size() == 0)return true;
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

