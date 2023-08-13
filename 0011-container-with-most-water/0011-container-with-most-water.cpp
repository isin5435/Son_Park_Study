class Solution {
public:
    int maxArea(vector<int>& height) 
    {
    int max_a = 0;

    int l = 0;
    int r = height.size() - 1;

    while (l < r)
    {

        int area = (r - l) * min(height[l], height[r]);
        max_a = max(area, max_a);

        if (height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
        
    }

     return max_a;   
    }
};