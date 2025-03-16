#include<stdio.h>
#include<string.h>

int main(){
char text[1000];
printf("Enter a string: ");
scanf("%s", &text);
int len = strlen(text);
int palindrome = 1;

for(int i=0; i <= len/2; i++){

if(text[i]!=text[len - i-1]){
palindrome = 0;
break;
}
}

if(palindrome == 0){
printf("\n%s: Not a palindrome", text);
}else if(palindrome == 1){
printf("\n%s: palindrome", text);
}
return 0;
}
