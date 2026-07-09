class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> numbs{};
        int max{};
        int maxnum{};
        for (const int& i : nums) {
            if (numbs.find(i) != numbs.end()) {
                numbs[i] = numbs[i] + 1;
            } else {
                numbs[i] = 1;
            }
            if (numbs.at(i) > max) {
                max = numbs.at(i);
                maxnum = i;
            }
        }

        return maxnum;
    }
};