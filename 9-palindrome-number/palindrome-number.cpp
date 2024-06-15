class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int original = x;
        
        long revN=0;
        while (x != 0) {
            int last_digit = x % 10;
            x = x / 10;
            revN = (revN * 10) +last_digit;
        };
    
       return revN == original;
    }
};