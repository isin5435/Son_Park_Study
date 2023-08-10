class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
		{

    vector<vector<string>> ans;
		unordered_map<string, vector<string>> index;
		vector<string> temp;


		for (auto temp1 : strs)
		{
			sort(temp1.begin(), temp1.end());
			temp.push_back(temp1);

		}

		for (int i = 0; i < temp.size(); i++)
		{
			if (index.find(temp[i]) != index.end())
			{
				index[temp[i]].push_back(strs[i]);
			}

			else
			{
				index[temp[i]] = vector<string>();
				index[temp[i]].push_back(strs[i]);
			}
		}	

		for (auto it = index.begin(); it != index.end(); ++it)
		{
			ans.push_back(it->second);
		}

		return ans;

  	}

};