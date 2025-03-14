#include<stdio.h>

int main(){
int arr[]={10, 20, 30, 40, 50, 60};
int temp;
int len = sizeof(arr)/4;
for(int i = 0; i <= len-i; i++){
temp = arr[i];
arr[i] = arr[len - i-1];
arr[len - i-1] = temp;
}

for(int i = 0; i<sizeof(arr)/4; i++){
printf("%d\n", arr[i]);
}

return 0;
}
