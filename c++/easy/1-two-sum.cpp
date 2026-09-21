class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> m{};
        for(int i{};i<nums.size();i++)
        {
            int com{target-nums[static_cast<std::size_t>(i)]};
            if(m.find(com)!=m.end())
            {
                return{m[com],i};
            }
            m[nums[i]]=i;
        }
        return{};
    }
};