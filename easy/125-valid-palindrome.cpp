class Solution {
public:
    bool isPalindrome(string s) {
        std::vector<char> word{};
        for (const char& c : s) {
            if (isalnum(c)) {
                word.push_back(tolower(c));
            }
        }
        if (word.empty())
            return true;

        for (std::size_t i{}, t{word.size() - 1}; i < t; i++, t--) {
            if (word[i] != word[t]) {
                return false;
            }
        }
        return true;
    }
};