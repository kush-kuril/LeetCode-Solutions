class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for(std::size_t y{}, i{s.size()-1};y<(s.size())/2;y++,i--)
        {
            std::swap(s[y],s[i]);
            
        }
    }
};