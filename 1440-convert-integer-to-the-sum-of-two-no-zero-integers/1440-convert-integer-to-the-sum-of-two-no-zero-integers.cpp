class Solution {
public:
 bool noZero(int x) {
            while (x > 0) {
                if (x % 10 == 0) return false;
                x /= 10;
            }
            return true;
        }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> arr;
        
        for (int a = 1; a < n; a++) {
            int b = n - a;
            if (noZero(a) && noZero(b)){
                arr.push_back(a);
                arr.push_back(b);
                return arr;
            };
        }
        return arr; 
    }
    
};