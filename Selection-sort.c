#include<stdio.h>

int main(){
int arr[5]={20, 10, 50, 40, 30};
int temp;

for(int i = 0; i < 5; i++){
    for(int j = i+1; j < 5; j++){

    if(arr[i] > arr[j]){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
     }
    }
}

 for(int i = 0; i < 5; i++){
  printf("%d\n", arr[i]);
 }
return 0;
}
