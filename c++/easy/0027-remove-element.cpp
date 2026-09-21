class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::size_t length{nums.size()};
        
        std::size_t i{};
        int count {};
        for (const auto& n : nums)
        {
            if (n==val)
            {
                count +=1;
                
            }
            else{
                nums[i]=n;
                i+=1;
            }
            

        }
        return( length-count);
    }
};
