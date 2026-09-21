class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map{};
        int i{};
        for (const auto& t: nums)
        {
            if(map.find(t)!=map.end())
            {
                return true;
            }
            map[t]=i;
            i++;
        }
        return false;
    }
};