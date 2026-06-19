class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        bool found{false};
        int i1{};
        int i2{};
        int a{};
        
        std::size_t l{numbers.size()};
        std::size_t j{l-1};
        for(std::size_t i{};i<l;)
        {
            a= numbers[i] +numbers[j] ;
            if(a<target)
            {
                i++;
            }
            else if (a>target)
            { 
                j--;
            }
            else{
                return {static_cast<int>(i+1),static_cast<int>(j+1)};

            }
            
        }
        return {};
        
    }
};