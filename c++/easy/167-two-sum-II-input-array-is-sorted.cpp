class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (std::size_t i{}, t{numbers.size() - 1}; i < t;) {
            int m{numbers[t] + numbers[i]};
            if (target < m) {
                t--;
            } else if (target > m) {
                i++;
            }
            if (target == m) {
                return {static_cast<int>(i + 1), static_cast<int>(t + 1)};
            }
        }
        return {};
    }
};