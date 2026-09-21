class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k{};
        std::size_t cr{};
        for(std::size_t i{};i<nums.size();i++)
        {
            if(nums[cr]!=nums[i])
            {
                cr++;
                nums[cr]=nums[i];
                k++;
            }
        }

        return k+1;
        
    }
};