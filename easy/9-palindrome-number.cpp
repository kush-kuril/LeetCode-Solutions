class Solution {
public:
    bool isPalindrome(int x) {
        
        int num{x};
        int count{};

        if (num < 0) {
            return false;
        }
        while (num > 0) {
            num /= 10;
            count++;
        }
        num=x;
        if (x == 0 || count == 1) {
            return true;
        }
        long long int r{};
        while ((x) > 0) {
            r = r * 10 + (x % 10);
            x = x / 10;
            count--;
        }
        if (r == num)
            return true;

        return false;
    }
};