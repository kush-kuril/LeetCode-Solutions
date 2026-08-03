class Solution {
public:
    void sortColors(vector<int>& nums) {
        std::size_t i{}, j{}, k{nums.size() - 1};
        int trash{};
        if (nums.size() < 2) {

        } else {
            while (j <= k) {
                if (nums[j] == 2) {
                    trash = nums[k];
                    nums[k] = nums[j];
                    nums[j] = trash;
                    if (k == 0) {
                        break;
                    } else {
                        k--;
                    }

                } else if (nums[j] == 0) {
                    trash = nums[i];
                    nums[i] = nums[j];
                    nums[j] = trash;
                    i++;
                    j++;
                } else {
                    j++;
                }
            }
        }
    }
};