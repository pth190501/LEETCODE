class Solution {
public:
    bool isPalindrome(int x) {
        long int temp = x;
        if (x < 0) return false;
        long int d,sum = 0;
        while (x > 0) {
            d = x % 10;
            sum = (sum * 10) + d;
            x = x/10;
        }
        return temp == sum;
    }
};