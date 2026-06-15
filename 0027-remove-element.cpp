class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::size_t length{nums.size()};
        std::vector<int> newnums (length);
        std::size_t i{};
        int count {};
        for (const auto& n : nums)
        {
            if (n==val)
            {
                count +=1;
                
            }
            else{
                newnums[i]=n;
                i+=1;
            }

        }
        for (std::size_t t{};t<length;t++)
        {
            nums[t]=newnums[t];
        }
        return (length-count);
    }
};
