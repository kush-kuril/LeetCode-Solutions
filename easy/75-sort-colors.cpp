class Solution {
public:
    void sortColors(vector<int>& nums) {
        std::size_t bk{};
        std::size_t cr{};
        std::size_t fwd{nums.size()-1};
        int trash{};
        while(cr<=fwd)
        {
            if(nums[cr]==2)
            {
                trash = nums[fwd];
                nums[fwd]=nums[cr];
                nums[cr]=trash;
                if(fwd==0)
                {
                    break;
                }else{
                    fwd--;
                }
                
                          

            }
            else if(nums[cr]==0)
            {
                trash = nums[bk];
                nums[bk] = nums[cr];
                nums[cr]=trash;
                cr++;
                bk++;
            }
            else{
                cr++;
            }
        }
        
    }
};