#include<bits/stdc++.h>
using namespace std;


struct Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

int main(){
    Node a(10);
    Node b(20);

    a.next = &b;

    cout << a.val << endl;
    cout << a.next->val << endl;
return 0;
}

