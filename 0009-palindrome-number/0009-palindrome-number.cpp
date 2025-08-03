class Solution {
public:
    bool isPalindrome(int x) {
  
  int temp = x;
    int rev_num = 0;
    while (temp > 0) {
         int digit = temp % 10;

         //check overflow
        if (rev_num > (INT_MAX - digit) / 10) {
            return false;
        }
        rev_num = rev_num * 10 + digit;
        temp = temp / 10;
    }

  return rev_num == x;
}



   
};