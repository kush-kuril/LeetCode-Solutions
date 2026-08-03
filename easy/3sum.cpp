class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::size_t l=nums.size();
        if(l<3)
        {
            return{};
        }
        std::sort(nums.begin(),nums.end());
        std::vector<vector<int>> result{};
        for(std::size_t i{};i<l-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            std::size_t j{i+1};
            std::size_t k{nums.size()-1};
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1]){j++;}
                    while(j<k&&nums[k]==nums[k+1]){k--;}
                }
                else if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
            }
        }
        return result;
    }
};