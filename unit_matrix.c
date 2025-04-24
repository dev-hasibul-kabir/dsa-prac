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
   if(arr[i][j] != 1){
    flag = 0;
   }
  }else if(arr[i][j] != 0){
   flag = 0;
  }
 }
}

if(flag != 0){
 printf("Unit Matrix");
}else{
 printf("Not a Unit Matrix");
}

return 0;
}
