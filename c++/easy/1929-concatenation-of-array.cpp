class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::size_t n {nums.size()};
        std::vector<int> ans(2*n);
        for(std::size_t i{};i<n;i++)
        {
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};
