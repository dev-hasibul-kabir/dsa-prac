#include<stdio.h>

int main(){
int n, s, k;
printf("Enter total row:");
scanf("%d", &n);
k = n * 2 - 1; // for star
s = 0; // for space

for(int i = 1; i <= n; i++){

  for(int j=1; j <= s; j++){
   printf(" ");
  }
  for(int j=1; j <= k; j++){
   printf("*");
  }
 k=k-2;
 s++;
printf("\n");
}

return 0;
}
