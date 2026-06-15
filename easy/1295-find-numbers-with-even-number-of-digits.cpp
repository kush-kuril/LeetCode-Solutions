class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evens {};
        for ( auto& num : nums)
        {
            int count {0};
            while (num>0)
            {
                num/=10;
                count++;
            }
            if (count%2 == 0)
            {
                evens +=1;
            }
        }
        return evens;
    }
};
