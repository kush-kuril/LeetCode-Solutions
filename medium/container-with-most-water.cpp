class Solution {
public:
    int maxArea(vector<int>& height) {
        std::size_t i{};
        std::size_t k{height.size()-1};
        int h{};
        int area{};
        
        while(k>i)
        {
            int min{std::min(height[i],height[k])};
            int a{(static_cast<int>(k-i))*min};
            if(a>area)
            {
                area=a;
            }
            if(height[i]>height[k])
            {
                k--;

            }else{
                i++;
            }


        }
        return area;

    }
};