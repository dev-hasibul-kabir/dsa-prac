#include<stdio.h>

int main(){
int my_arr[]={10, 20, 30, 40, 50};
int pos;
scanf("%d", &pos);
int arr_len = 5;
printf("pos: %d\n", pos);
for(int i = arr_len; i>=pos+1; i--){
my_arr[i]=my_arr[i-1];
}
int len = sizeof(my_arr)/4;

my_arr[pos]=150;
for(int i=0; i<=len; i++){
printf("%d\n", my_arr[i]);
}
printf("\n%d", len);
return 0;
}
