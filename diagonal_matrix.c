#include<stdio.h>
#include<string.h>

int main(){
int row, col;
scanf("%d %d", &row, &col);
int arr[row][col];
for(int i = 0; i < row; i++){
 for(int j = 0; j < col; j++){
  scanf("%d", &arr[i][j]);
 }
}
int flag = 1;
for(int i = 0; i < row; i++){
 for(int j = 0; j < col; j++){
  if(i==j){
   continue;
  }
  if(arr[i][j] != 0){
   flag = 0;
  }
 }
}

if(flag == 1){
printf("Primary Diagonal Matrix\n");
}else{
printf("Not a Diagonal Matrix\n");
}
return 0;
}
