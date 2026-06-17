class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::size_t count{};
        std::size_t l{nums.size()};
        
        std::size_t c{};
        std::size_t i{};
        
        while (i<l)
        {
            nums[c]=nums[i];
            
            i++;
            if( i<l)
            {
                if(nums[c]==nums[i])
                {
                    count+=1;
                }
                
                else
                {
                    c++;
                }
            }       
                
        }
        for(std::size_t o{};o<count;o++)
        {
            nums[l-count+o];
        }
        
        
        return (l-count);
    }
};