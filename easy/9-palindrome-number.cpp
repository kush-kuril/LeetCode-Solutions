class Solution {
public:
    bool isPalindrome(int x) {
        std::string dih {std::to_string(x)};
        std::size_t length{dih.size()};
        for(const char& si:dih)
        {
            if(si!=dih[length-1])
            {
                return false;
            }
            length--;
        }
        return true;
    }
};