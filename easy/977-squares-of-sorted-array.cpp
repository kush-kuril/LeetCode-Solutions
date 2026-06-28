class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::size_t l{nums.size()};
        std::size_t i{};
        std::size_t m{};
        int j{static_cast<int>(l - 1)};
        int k{static_cast<int>(l - 1)};
        std::vector<int> sorted(l);
        
        for (const auto& n : nums) {

            nums[i] = n * n;

            i++;
        }

        i = 0;
        for (; i <= k ; j--) {
            if (nums[i] > nums[k]) {
                sorted[j] = nums[i];
                i++;

            } else {
                sorted[j] = nums[k];
                if (k==0)
                {
                    break;
                }
                else{
                    k--;
                }
                
            }
        }

        return sorted;
    }
};