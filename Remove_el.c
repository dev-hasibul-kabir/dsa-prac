#include<stdio.h>

int main(){
int arr[]={10, 20, 30, 40, 50};
int pos;
scanf("%d", &pos);
int len = sizeof(arr)/4;
for(int i = pos; i<=len; i++){
arr[i]=arr[i+1];
}

for(int i=0; i<len-1; i++){
printf("%d\n", arr[i]);
}

return 0;
}
