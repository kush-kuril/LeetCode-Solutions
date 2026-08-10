class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count{};
        for(const auto& t:nums)
        {
            if (t==0)
            {
                count++;
            }

        }
        std::size_t i{};
        for(const auto& t:nums)
        {
            if(t!=0)
            {
                nums[i]=t;
                i++;
            }
            
        }
        for(std::size_t j{};j<static_cast<std::size_t>(count);j++)
        {
            nums[(nums.size()-1)-j]=0;
        }
    }
};