#include<stdio.h>

int main(){
int r, c;
scanf("%d %d", &r, &c);
int arr[r][c];
for(int i = 0; i < r; i++){
 for(int j = 0; j < c; j++){
  scanf("%d", &arr[i][j]);
 }

}
int cnt = 0;
for(int i = 0; i < r; i++){
 for(int j = 0; j < c; j++){
  if(arr[i][j] == 0){
  cnt++;
  }
 }
}

int total_degit = r * c;

if(total_degit == cnt){
printf("Null Matrix");
}else{
printf("Not Null Matrix");
}
return 0;
}
