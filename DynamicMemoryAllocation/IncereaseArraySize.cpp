#include<bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int[4]{10, 20, 30, 40}; // Allocate dynamic array
    int *b = new int[4];

    for(int i = 0; i < 4; i++){
        b[i]=a[i]; // copy elements from dynamic array 'a' to dynamic array 'b'
    }

   delete[] a; // delete dynamic array 'a'

   a = new int[5]; // increase dynamic array size

     for(int i = 0; i < 4; i++){
        a[i] = b[i]; //reset elements from dynamic array 'b' to dynamic array 'a'
    }

    delete[] b; // delete dynamic array 'b'

    a[4] = 50; // set new value to increased slot

     for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }


return 0;
}
