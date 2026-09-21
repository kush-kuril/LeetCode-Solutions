class Solution {
public:
    int firstUniqChar(string s) {
        std::array<int, 26> alpha{};
        int index{};
        for (const char& c : s) {
            index = c - 'a';
            alpha[index]++;
        }
        for (std::size_t i{}; i < s.size(); i++) {
            index = static_cast<char>(s[i]) - 'a';
            if (alpha[index] == 1) {
                return static_cast<int>(i);
            }
        }
        return -1;
    }
};