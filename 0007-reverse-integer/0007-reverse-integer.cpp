class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long num = x;

        bool negetive = x < 0;
        num = negetive ? -num : num; //convert to positive

    while(num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        if (rev > INT_MAX) return 0; //checking overflow
        num = num / 10;
    }

    return negetive ? -rev : rev;
    }
};