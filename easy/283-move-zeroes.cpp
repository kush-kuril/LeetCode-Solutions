class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::size_t l{nums.size()};
        std::size_t i{};
        int count{};
        for(const auto& num:nums)
        {
            if (num==0)
            {
                count+=1;

            }
        }
        for(auto const& n:nums)
        {
            if (n!=0)
            {
                nums[i]=n;
                i+=1;
            }
            else{
                continue;
            }
        }
        
        for(std::size_t y{};y<count;y++)
        {
            nums[l-count+y]=0;
        }
        
    }
};