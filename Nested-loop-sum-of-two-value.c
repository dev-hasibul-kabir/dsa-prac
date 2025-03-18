#include<stdio.h>

int main(){
int arr[100], n, x, flag=0;
printf("Enter the number of digits:");
scanf("%d", &n);
printf("Enter the digits:\n");
for(int i = 0; i<n; i++){
scanf("%d", &arr[i]);
}

printf("Enter the value to compare with the summation:");
scanf("%d", &x);

for (int i = 0; i < n; i++){
 for(int j = i+1; j < n; j++){
  if(arr[i]+arr[j]==x){
  flag = 1;
  }
 }
}

if(flag == 1){
printf("Matched");
}else{
printf("Not Matched");
}

return 0;
}
