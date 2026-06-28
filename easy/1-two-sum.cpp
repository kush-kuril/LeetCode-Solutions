class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::size_t l {nums.size()};
        for (std::size_t i{}; i<l;i++)
        {
            for(std::size_t j{};j<l;j++)
            {
                if (nums[i]+nums[j]==target&& i!=j)
                {
                    return{static_cast<int>(i),static_cast<int>(j)};
                }
            }
        }
        return{};
    }
};