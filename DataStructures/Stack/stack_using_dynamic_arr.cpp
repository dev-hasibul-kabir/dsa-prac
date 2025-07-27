#include<bits/stdc++.h>

using namespace std;

class myStack{
public:
    vector<int> v;

    void push(int val){
        this->v.push_back(val);
    }
    void pop(){
        this->v.pop_back();
    }
    int top(){
        return this->v.back();
    }
    int size(){
        return this->v.size();
    }
    bool empty(){
        if(this->v.size() == 0)return true;
        else return false;
    }

};

int main(){
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40)

    //print values by popping out
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

return 0;
}
