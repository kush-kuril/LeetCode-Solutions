class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }
        std::vector<int> alpha(26, 0);
        for (const char& c : s) {
            int index = c - 'a';
            alpha[index]++;
        }
        for (const char& c : t) {
            int index = c - 'a';
            alpha[index]--;
            if (alpha[index] < 0) {
                return false;
            }
        }
        return true;
    }
};