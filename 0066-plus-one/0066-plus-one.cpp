class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {   
            digits[i]++;
            return digits;
        }
        digits[i] = 0;       
    }
    // If all the digits are 9. then the will turn into 0 by prev logic. And we are inserting 1 at the begin at that time
    digits.insert(digits.begin(), 1);
    return digits;
    }
};