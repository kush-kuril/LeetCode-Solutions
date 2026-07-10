class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char,int> lets {};
        for(const char& c:s)
        {
            if(lets.find(c)!=lets.end())
            {
                lets[c]=lets[c]+1;
            }else{
                lets[c]=0;
            }
            
        }
        for(std::size_t i{};i<s.size();i++)
        {
            if(lets[s[i]]==0)
            {
                return static_cast<int>(i);
            }
        }
        return -1;
    }
};