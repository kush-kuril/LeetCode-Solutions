class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::size_t l{nums.size()};
        std::vector<int> ans(2*l);

        for(std::size_t i{};i<l;i++)
        {
            ans[i]=nums[i];
            ans[i+l]=nums[i];
        }
        return ans;
    }
};