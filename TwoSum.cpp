class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> sol;
        int first;
        int second;

        for(int i =0; i < nums.size()-1; i++)
        {
            if(nums[i] == target)
            {
                break;
            }

            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    first = i;
                    second = j;
                    i = nums.size()-1;
                    break;
                }

            }
        }

        sol.push_back(first);
        sol.push_back(second);

        return sol;
    }
};
