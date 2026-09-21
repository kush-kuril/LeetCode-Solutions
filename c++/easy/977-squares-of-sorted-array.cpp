class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> ans(nums.size());
        std::size_t j{nums.size()-1};
        for(std::size_t i{};i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        for(std::size_t i{},k{nums.size()-1};i<=k;j--)
        {
            if (nums[i] > nums[k]) {
                ans[j] = nums[i];
                i++;

            } else{
                ans[j]=nums[k];
                if (k==0)
                {
                    break;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};