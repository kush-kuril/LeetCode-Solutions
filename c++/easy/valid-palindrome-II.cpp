class Solution {
public:
    bool isPal(string& s,int i, int k)
    {
        while(i<k)
        {
            if(s[i]!=s[k])
            {
                return false;
            }
            i++;
            k--;
        
        }
        return true;
    }
    bool validPalindrome(string s) {
        std::size_t i{};
        std::size_t k{s.size()-1};
        while(i<k)
        {
            if(s[i]!=s[k])
            {
                return this->isPal(s, i+1, k) || this->isPal(s, i, k-1);
            }
            i++;
            k--;
        }
        return true;
    }
};