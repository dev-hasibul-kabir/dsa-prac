#include<stdio.h>

int main(){

int row, col;
scanf("%d %d", &row, &col);
int arr[row][col];
int flag = 1;

for(int i = 0; i < row; i++){
 for(int j = 0; j < col; j++){
  scanf("%d", &arr[i][j]);
 }
}

for(int i = 0; i < row; i++){
 for(int j = 0; j < col; j++){
  if(i == j){
   if(arr[0][0] != arr[i][j]){
    flag = 0;
   }
  }else if(arr[i][j] != 0){
   flag = 0;
  }
 }
}

if(flag != 0){
 printf("Scalar Matrix");
}else{
 printf("Not a Scalar Matrix");
}

return 0;
}
